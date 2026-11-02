/* Module: vidcap30.exe
   Function: FUN_00450090
   Address: 00450090
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00450090(uchar *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_0042e1e0(1,0);
  if (iVar1 == 0) {
    return -0x7ffb1ff4;
  }
  iVar1 = FUN_0042e780();
  if (iVar1 != 0) {
    _SfSummary_Free_4(iVar1 + 0x1c0);
    *(undefined4 *)(iVar1 + 0x1c8) = 0;
    _mbscpy((uchar *)(iVar1 + 0xbc),param_1);
    iVar3 = FUN_004165b0(0x13c);
    if (iVar3 != 0) {
      *(undefined1 **)(iVar3 + 0x1c) = &LAB_00450170;
      *(undefined4 *)(iVar3 + 0x20) = 0xa0;
      *(uint *)(iVar3 + 0x18) = *(uint *)(iVar3 + 0x18) | 0x32;
      *(undefined4 *)(iVar3 + 0x28) = 5;
      _mbscpy((uchar *)(iVar3 + 0x2c),(uchar *)(iVar1 + 0xbc));
      *(int *)(iVar3 + 0x130) = iVar1;
      *(undefined4 *)(iVar3 + 0x134) = param_2;
      *(undefined4 *)(iVar3 + 0x138) = 0;
      iVar2 = FUN_004169a0(iVar3);
      if (-1 < iVar2) {
        return iVar2;
      }
      goto LAB_0045013c;
    }
  }
  iVar2 = -0x7ff8fff2;
LAB_0045013c:
  if (iVar1 != 0) {
    FUN_0042e600(iVar1,0);
  }
  if (iVar3 != 0) {
    FUN_00416600(iVar3);
  }
  return iVar2;
}


