# chrony for an SDV Media product: inherit this file from the product makefile and
# import /product/etc/init/chronyd.rc from the product's root init.

PRODUCT_PACKAGES += chronyd chronyc chrony_refresh.sh
PRODUCT_PRIVATE_SEPOLICY_DIRS += vendor/sdv-everyware/third_party/chrony/android/sepolicy/private
