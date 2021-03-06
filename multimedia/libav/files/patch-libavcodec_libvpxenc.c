commit 6540fe0
Author: James Zern <jzern@google.com>
Date:   Mon Oct 19 22:44:11 2015 -0700

    libvpxenc: remove some unused ctrl id mappings
    
    VP8E_UPD_ENTROPY, VP8E_UPD_REFERENCE, VP8E_USE_REFERENCE were removed
    from libvpx and the remaining values were never used here
    
    Reviewed-by: Michael Niedermayer <michael@niedermayer.cc>
    Signed-off-by: James Zern <jzern@google.com>
---
 libavcodec/libvpxenc.c | 8 --------
 1 file changed, 8 deletions(-)

diff --git libavcodec/libvpxenc.c libavcodec/libvpxenc.c
index 5f39783..992122c 100644
--- libavcodec/libvpxenc.c
+++ libavcodec/libvpxenc.c
@@ -104,19 +104,11 @@ typedef struct VP8EncoderContext {
 
 /** String mappings for enum vp8e_enc_control_id */
 static const char *const ctlidstr[] = {
-    [VP8E_UPD_ENTROPY]           = "VP8E_UPD_ENTROPY",
-    [VP8E_UPD_REFERENCE]         = "VP8E_UPD_REFERENCE",
-    [VP8E_USE_REFERENCE]         = "VP8E_USE_REFERENCE",
-    [VP8E_SET_ROI_MAP]           = "VP8E_SET_ROI_MAP",
-    [VP8E_SET_ACTIVEMAP]         = "VP8E_SET_ACTIVEMAP",
-    [VP8E_SET_SCALEMODE]         = "VP8E_SET_SCALEMODE",
     [VP8E_SET_CPUUSED]           = "VP8E_SET_CPUUSED",
     [VP8E_SET_ENABLEAUTOALTREF]  = "VP8E_SET_ENABLEAUTOALTREF",
     [VP8E_SET_NOISE_SENSITIVITY] = "VP8E_SET_NOISE_SENSITIVITY",
-    [VP8E_SET_SHARPNESS]         = "VP8E_SET_SHARPNESS",
     [VP8E_SET_STATIC_THRESHOLD]  = "VP8E_SET_STATIC_THRESHOLD",
     [VP8E_SET_TOKEN_PARTITIONS]  = "VP8E_SET_TOKEN_PARTITIONS",
-    [VP8E_GET_LAST_QUANTIZER]    = "VP8E_GET_LAST_QUANTIZER",
     [VP8E_SET_ARNR_MAXFRAMES]    = "VP8E_SET_ARNR_MAXFRAMES",
     [VP8E_SET_ARNR_STRENGTH]     = "VP8E_SET_ARNR_STRENGTH",
     [VP8E_SET_ARNR_TYPE]         = "VP8E_SET_ARNR_TYPE",
