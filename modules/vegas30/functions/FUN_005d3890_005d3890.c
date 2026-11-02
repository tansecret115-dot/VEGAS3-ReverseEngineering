/* Module: vegas30.exe
   Function: FUN_005d3890
   Address: 005d3890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d3890(int param_1)

{
  uchar *puVar1;
  
  DAT_00648508 = *(undefined4 *)(param_1 + 0x35c);
  DAT_00648504 = *(undefined4 *)(param_1 + 0x360);
  DAT_00648684 = *(undefined4 *)(param_1 + 0x23c);
  DAT_00648688 = *(undefined4 *)(param_1 + 0x350);
  DAT_006484fc = *(undefined4 *)(param_1 + 0xd04);
  DAT_006477f0 = *(undefined4 *)(param_1 + 0xd18);
  DAT_006477f4 = *(undefined4 *)(param_1 + 0xd1c);
  DAT_006477f8 = *(undefined4 *)(param_1 + 0xd28);
  DAT_006477e0 = *(undefined4 *)(param_1 + 0xd08);
  DAT_00647800 = *(undefined4 *)(param_1 + 0xd20);
  DAT_00647804 = *(undefined4 *)(param_1 + 0xd24);
  DAT_00648614 = *(undefined4 *)(param_1 + 0xd74);
  DAT_00648618 = *(undefined4 *)(param_1 + 0xd78);
  DAT_00648624 = *(undefined4 *)(param_1 + 0xd7c);
  DAT_00648628 = *(undefined4 *)(param_1 + 0xd80);
  DAT_0064862c = *(undefined4 *)(param_1 + 0xd84);
  DAT_00648664 = *(undefined4 *)(param_1 + 0xd88);
  DAT_0064866c = *(undefined4 *)(param_1 + 0xd8c);
  DAT_00648670 = *(undefined4 *)(param_1 + 0xd90);
  DAT_00648674 = *(undefined4 *)(param_1 + 0xd94);
  DAT_00648678 = *(undefined4 *)(param_1 + 0xd98);
  DAT_006477e8 = *(undefined4 *)(param_1 + 0xda0);
  DAT_006477ec = *(undefined4 *)(param_1 + 0xda4);
  DAT_00648630 = *(undefined4 *)(param_1 + 0xda8);
  DAT_00648634 = *(undefined4 *)(param_1 + 0xdac);
  DAT_0064850c = *(undefined4 *)(param_1 + 0xdb8);
  DAT_00648510 = *(undefined4 *)(param_1 + 0xdb4);
  DAT_00648514 = *(undefined4 *)(param_1 + 0xdb0);
  DAT_00648518 = *(undefined4 *)(param_1 + 0xdbc);
  DAT_0064861c = *(undefined4 *)(param_1 + 0xdc0);
  DAT_00649e00 = *(undefined4 *)(param_1 + 0xdc4);
  _mbscpy(&DAT_006486bc,(uchar *)(param_1 + 0x24));
  _mbscpy(&DAT_00649e38,(uchar *)(param_1 + 0x128));
  param_1 = param_1 + 0x234;
  puVar1 = (uchar *)_SfSummary_GetItemText_8(param_1,0x474e4549);
  if (puVar1 != (uchar *)0x0) {
    _mbscpy(&DAT_00647ec8,puVar1);
  }
  puVar1 = (uchar *)_SfSummary_GetItemText_8(param_1,0x4d414e49);
  if (puVar1 != (uchar *)0x0) {
    _mbscpy(&DAT_00647f48,puVar1);
  }
  puVar1 = (uchar *)_SfSummary_GetItemText_8(param_1,0x54524149);
  if (puVar1 != (uchar *)0x0) {
    _mbscpy(&DAT_00647fc8,puVar1);
  }
  puVar1 = (uchar *)_SfSummary_GetItemText_8(param_1,0x504f4349);
  if (puVar1 != (uchar *)0x0) {
    _mbscpy(&DAT_00648048,puVar1);
  }
  puVar1 = (uchar *)_SfSummary_GetItemText_8(param_1,0x544d4349);
  if (puVar1 != (uchar *)0x0) {
    _mbscpy(&DAT_006480c8,puVar1);
  }
  return 1;
}


