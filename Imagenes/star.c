
/*******************************************************************************
* image
* filename: unsaved
* name: star
*
* preset name: Color R5G6B5
* data block size: 16 bit(s), uint16_t
* RLE compression enabled: no
* conversion type: Color, not_used not_used
* bits per pixel: 16
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: no
*******************************************************************************/

/*
 typedef struct {
     const uint16_t *data;
     uint16_t width;
     uint16_t height;
     uint8_t dataSize;
     } tImage;
*/
#include <stdint.h>



static const uint16_t image_data_star[484] = {
    0x0801, 0x0800, 0x0000, 0x0020, 0x0001, 0x0000, 0x0000, 0x0002, 0x0002, 0x0020, 0x2940, 0x2100, 0x0040, 0x0003, 0x0003, 0x0000, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0800, 
    0x0002, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x2100, 0xffb7, 0xfff9, 0x0020, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0001, 
    0x0000, 0x0002, 0x0001, 0x0020, 0x0000, 0x0000, 0x0801, 0x0800, 0x1000, 0xcdcf, 0xfffb, 0xfffd, 0xa4ae, 0x1000, 0x0800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0001, 0x0000, 
    0x0000, 0x0001, 0x0001, 0x0000, 0x0000, 0x0002, 0x0003, 0x1000, 0x6200, 0xff50, 0xff78, 0xff9c, 0xff98, 0x1820, 0x0800, 0x0003, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x0000, 
    0x0800, 0x0000, 0x0020, 0x0040, 0x0000, 0x0002, 0x0003, 0x0800, 0xd567, 0xff8d, 0xff73, 0xff98, 0xff95, 0x8b82, 0x0800, 0x0004, 0x0021, 0x0001, 0x0001, 0x0020, 0x0000, 0x0000, 
    0x0800, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0000, 0x3140, 0xff0c, 0xff4c, 0xff2f, 0xf752, 0xff91, 0xf6ef, 0x1000, 0x0000, 0x0020, 0x0020, 0x0000, 0x0000, 0x0000, 0x0001, 
    0x0800, 0x0800, 0x0820, 0x0800, 0x1820, 0x1000, 0x18a0, 0xb506, 0xff2d, 0xf6ec, 0xff0e, 0xff4f, 0xff4e, 0xff6f, 0x6280, 0x1020, 0x1000, 0x1000, 0x1000, 0x1000, 0x0800, 0x0000, 
    0x1000, 0x7b24, 0xb4c7, 0xddeb, 0xee6e, 0xff0e, 0xff2b, 0xff2a, 0xf6eb, 0xfeed, 0xf6cc, 0xfeeb, 0xfeeb, 0xfeeb, 0xff0b, 0xeeea, 0xf68b, 0xe5e9, 0xc4e8, 0xa406, 0x72c4, 0x1860, 
    0x5a20, 0xff2d, 0xfee8, 0xff08, 0xfec9, 0xf6c9, 0xff08, 0xfec7, 0xfec9, 0xfeaa, 0xfea9, 0xfea8, 0xfea8, 0xfe89, 0xfec8, 0xf707, 0xfea7, 0xfea8, 0xfee9, 0xfee9, 0xff2c, 0x93e3, 
    0x1820, 0xcd66, 0xf663, 0xf640, 0xf663, 0xfe85, 0xf645, 0xfe85, 0xfe85, 0xfea6, 0xfe86, 0xfe66, 0xfe67, 0xfe67, 0xfe86, 0xf6a5, 0xfe84, 0xfe83, 0xf662, 0xfee5, 0xd5c6, 0x1020, 
    0x0800, 0x1000, 0xdde7, 0xfea4, 0xfe61, 0xfe42, 0xfe64, 0xfe43, 0xfe64, 0xfea4, 0xfea6, 0xfe67, 0xfe67, 0xfe66, 0xfe86, 0xf685, 0xfe64, 0xfe82, 0xfee3, 0xd5c5, 0x1000, 0x0800, 
    0x0004, 0x0000, 0x0800, 0xcd46, 0xfe85, 0xfe43, 0xfe43, 0xfea5, 0xfea6, 0xfea7, 0xfea9, 0xfeaa, 0xfea9, 0xfea7, 0xfea6, 0xfe86, 0xfea5, 0xfee6, 0xc544, 0x1000, 0x0801, 0x0003, 
    0x0002, 0x0002, 0x0040, 0x1000, 0xc4c6, 0xfea9, 0xfea7, 0xf6c9, 0xfeeb, 0xfeac, 0xfece, 0xfeee, 0xff0c, 0xfeca, 0xfea9, 0xfea9, 0xff2a, 0xbd07, 0x1000, 0x0800, 0x0002, 0x0002, 
    0x0800, 0x0000, 0x0021, 0x0000, 0x1800, 0xee2c, 0xff0d, 0xff2e, 0xfef0, 0xfeb1, 0xfed1, 0xff11, 0xff31, 0xf70f, 0xfeed, 0xfeed, 0xd60a, 0x1000, 0x0800, 0x0002, 0x0000, 0x0020, 
    0x0800, 0x0040, 0x0020, 0x0000, 0x1000, 0xf6d2, 0xf6f0, 0xff31, 0xfef2, 0xfed3, 0xfef3, 0xff54, 0xff54, 0xff33, 0xff11, 0xfef0, 0xde4e, 0x1000, 0x0000, 0x0001, 0x0020, 0x0020, 
    0x0000, 0x0000, 0x0020, 0x0000, 0x30e0, 0xff54, 0xff32, 0xff11, 0xfef2, 0xfef3, 0xff34, 0xf755, 0xf756, 0xff35, 0xfef3, 0xfed0, 0xff34, 0x1840, 0x0020, 0x0020, 0x0001, 0x0000, 
    0x0800, 0x0001, 0x0002, 0x0000, 0x7b25, 0xffb3, 0xff10, 0xfef3, 0xfef5, 0xff54, 0xffd2, 0xffd3, 0xff76, 0xff17, 0xff14, 0xfeef, 0xff90, 0x5a61, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0800, 0x0001, 0x0001, 0x0020, 0xcdcc, 0xff4e, 0xff0f, 0xff12, 0xff95, 0xffb6, 0xde51, 0xe694, 0xffd9, 0xffd7, 0xff11, 0xff0e, 0xffb1, 0x9448, 0x0820, 0x0000, 0x0000, 0x0000, 
    0x0800, 0x0001, 0x0000, 0x0040, 0xff6f, 0xff0c, 0xff30, 0xffd5, 0xf733, 0x5a42, 0x0800, 0x0800, 0x5a86, 0xf753, 0xfff4, 0xff31, 0xff50, 0xd651, 0x0800, 0x0000, 0x0000, 0x0000, 
    0x0800, 0x0001, 0x0001, 0x10a0, 0xff92, 0xff71, 0xffb6, 0xa4ac, 0x0820, 0x0800, 0x0800, 0x0002, 0x0000, 0x0820, 0xa4aa, 0xff97, 0xfff3, 0xf735, 0x0800, 0x0000, 0x0000, 0x0000, 
    0x0800, 0x0001, 0x0021, 0x0020, 0xd631, 0xcd8f, 0x3941, 0x0800, 0x0000, 0x0800, 0x0000, 0x0001, 0x0000, 0x0000, 0x0800, 0x28c2, 0xbd28, 0xb50d, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0800, 0x0000, 0x0000, 0x0000, 0x1000, 0x1000, 0x0800, 0x0001, 0x0002, 0x0001, 0x0000, 0x0000, 0x0000, 0x0001, 0x0801, 0x0800, 0x1800, 0x1000, 0x0000, 0x0001, 0x0000, 0x0820
};


