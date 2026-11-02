/* Module: vegas30.exe
   Function: FUN_004cfb60
   Address: 004cfb60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004cfb60(int param_1,int *param_2)

{
  uint uVar1;
  HDC hDC;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_30;
  int local_2c;
  undefined1 local_28 [40];
  
  uVar1 = FUN_004c4db0(**(uint **)(param_1 + 0x5d0) >> 6 & 1);
  if (DAT_0063ebd4 != uVar1) {
    DAT_0063ebd4 = uVar1;
    hDC = GetDC((HWND)0x0);
    FUN_004c4b90(0,0,local_28);
    puVar5 = &DAT_0064cbb8;
    puVar3 = local_28;
    uVar4 = 0xffffffff;
    uVar2 = _SfGetUIFont_4(100);
    _SfGetTextExtent_16(uVar2,puVar3,uVar4,puVar5);
    FUN_004c4b90(0,2,local_28);
    piVar6 = &local_30;
    puVar3 = local_28;
    uVar4 = 0xffffffff;
    uVar2 = _SfGetUIFont_4(100);
    _SfGetTextExtent_16(uVar2,puVar3,uVar4,piVar6);
    if (1 < DAT_0063ebd4) {
      local_30 = local_30 + local_2c * 2;
    }
    if (DAT_0064cbb8 < local_30) {
      DAT_0064cbb8 = local_30;
    }
    FUN_004c4b90(0,0x80,local_28);
    piVar6 = &local_30;
    puVar3 = local_28;
    uVar4 = 0xffffffff;
    uVar2 = _SfGetUIFont_4(100);
    _SfGetTextExtent_16(uVar2,puVar3,uVar4,piVar6);
    if (DAT_0064cbb8 < local_30) {
      DAT_0064cbb8 = local_30;
    }
    DAT_0064cbb8 = DAT_0064cbb8 + 4;
    ReleaseDC((HWND)0x0,hDC);
  }
  *param_2 = DAT_0064cbb8;
  param_2[1] = DAT_0064cbbc;
  return;
}


