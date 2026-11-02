/* Module: vegas30.exe
   Function: FUN_004c8390
   Address: 004c8390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c8390(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0xbc8) != 0) {
    piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    if (((piVar3 != (int *)0x0) && (iVar1 = *piVar3, 1 < iVar1)) &&
       ((*(byte *)(param_2 + 0x10) & 0x10) != 0)) {
      iVar6 = *(int *)(*(int *)(param_2 + 0x69c) + 0x54);
      iVar4 = _MeterInst_Message_16(*(undefined4 *)(iVar6 + 0x324),0x60e,0,0);
      uVar5 = _MeterInst_Message_16(*(undefined4 *)(iVar6 + 0x324),0x610,0,0);
      uVar7 = (uVar5 ^ param_4) & 0x700;
      param_4 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = *(int *)(piVar3[2] + param_4 * 4);
          if ((((((*(uint *)(iVar2 + 0x10) & 0x10) != 0) && (iVar2 != param_2)) &&
               ((*(int *)(iVar2 + 4) == 2 &&
                (((*(uint *)(iVar2 + 0x10) & 0x80) != 0 && (*(int *)(iVar6 + 0x324) != 0)))))) &&
              (iVar6 = *(int *)(*(int *)(iVar2 + 0x69c) + 0x54), iVar6 != 0)) &&
             (*(int *)(iVar6 + 0x324) != 0)) {
            _MeterInst_Message_16(*(int *)(iVar6 + 0x324),0x611,uVar7 & uVar5,1);
            _MeterInst_Message_16(*(undefined4 *)(iVar6 + 0x324),0x611,~uVar5 & uVar7,0);
            if (iVar4 != param_3) {
              _MeterInst_Message_16(*(undefined4 *)(iVar6 + 0x324),0x60f,0,iVar4);
            }
            InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(iVar6 + 0x104),0);
          }
          param_4 = param_4 + 1;
        } while ((int)param_4 < iVar1);
      }
    }
  }
  return;
}


