#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xba56d3fc, "skb_free_datagram" },
	{ 0x49671db1, "sock_queue_rcv_skb_reason" },
	{ 0xe8d20633, "_copy_to_iter" },
	{ 0xdb9b667b, "skb_put" },
	{ 0x428e9d2d, "can_rx_unregister" },
	{ 0xe1194d5, "hrtimer_try_to_cancel" },
	{ 0xf0688aa4, "nla_put_64bit" },
	{ 0x227ce9aa, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x648ed4d4, "can_sock_destruct" },
	{ 0x99f7371c, "refcount_dec_and_mutex_lock" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x155eaa7b, "netdev_warn" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc7f5e69f, "netdev_err" },
	{ 0xd9eff452, "sk_error_report" },
	{ 0x1020017c, "put_cmsg" },
	{ 0xee90cab2, "skb_queue_purge_reason" },
	{ 0x448baf4, "can_proto_register" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x747e6411, "datagram_poll" },
	{ 0xf3870de0, "__sock_recv_cmsgs" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x4bdf497b, "__alloc_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0x67a40575, "skb_queue_tail" },
	{ 0xc7cdfd0c, "can_send" },
	{ 0xa1cdd856, "sock_no_shutdown" },
	{ 0x4e547048, "__kmalloc_node_track_caller" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xf635fc2, "skb_pull" },
	{ 0xb90c9a01, "dev_get_by_index" },
	{ 0x43ceef5b, "sk_free" },
	{ 0xc7d7772d, "kfree_skb_reason" },
	{ 0xaa55240, "netdev_printk" },
	{ 0xfbd5a213, "sock_no_accept" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x164c75b0, "skb_push" },
	{ 0x51553fe5, "sock_no_listen" },
	{ 0x530832b3, "nla_put" },
	{ 0x98944343, "sock_recv_errqueue" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5de81dc6, "lock_sock_nested" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xac7e25e6, "sock_no_socketpair" },
	{ 0xdcb764ad, "memset" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xa916c96b, "sock_efree" },
	{ 0xd0be92be, "sock_no_mmap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8cce7b44, "skb_trim" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7255ddbe, "sock_queue_err_skb" },
	{ 0xcd62f55f, "netdev_alert" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc96216f0, "skb_recv_datagram" },
	{ 0x2f36750c, "sock_alloc_send_pskb" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x70f7c3e9, "skb_clone" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x1f11e99d, "_copy_from_iter" },
	{ 0x586c6bfa, "can_proto_unregister" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3f84a1d0, "kmalloc_trace" },
	{ 0x7a9e034c, "netdev_notice" },
	{ 0xe6653a88, "iov_iter_revert" },
	{ 0x3140aa35, "can_rx_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xbf33e261, "kmalloc_caches" },
	{ 0x3507cf98, "netdev_info" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x293d2f91, "release_sock" },
	{ 0x43380b07, "module_layout" },
};

MODULE_INFO(depends, "can");

