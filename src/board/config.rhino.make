include $(TOP_DIR)/aos_board_conf.mk
CONFIG_ENV_CFLAGS   += \
    -g3 --coverage \
    -DBUILD_AOS \
    -DCONFIG_HTTP_AUTH_TIMEOUT=500 \
    -DCONFIG_MID_HTTP_TIMEOUT=500 \
    -DCONFIG_GUIDER_AUTH_TIMEOUT=500 \
    -DIOTX_NET_INIT_WITH_PK_EXT \
    -DCM_VIA_CLOUD_CONN \
    -DCM_VIA_CLOUD_CONN_MQTT \
    -DCM_SUPPORT_MULTI_THREAD_VIA_HAL \
    -I$(TOP_DIR)/../../../../include \
   

#CONFIG_ENV_CFLAGS   += -Werror
CONFIG_src/thirdparty/tls :=
CONFIG_examples      :=
CONFIG_src/thirdparty  :=
CONFIG_src/platform  :=
CONFIG_src/tools/linkkit_tsl_convert :=
CONFIG_src/utils/digest :=
CONFIG_tests :=


