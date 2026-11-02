/* Module: vegas30.exe
   Function: FUN_005d5710
   Address: 005d5710
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d5710(int param_1,HWND param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  CHAR local_30 [44];
  
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  if (((param_3 & 0xffff) == 9) || ((param_3 & 0xffff) == 8)) {
    iVar3 = GetWindowTextA(param_2,local_30,0x28);
    if (iVar3 != 0) {
      fVar5 = (float10)_SfTextToDoubleTokenEx_32
                                 (local_30,uVar4,uVar1,DAT_0062a190,DAT_0062a194,DAT_0062a198,
                                  DAT_0062a19c,0);
      SfSetWindowText(param_2,&DAT_00619d20,(double)fVar5);
    }
  }
  uVar4 = ftol();
  iVar3 = _Spinner_DefScrollProc_24(0x115,param_3,param_4,1,2,uVar4);
  dVar2 = (double)iVar3 * _DAT_006128f8;
  if (dVar2 != *(double *)(param_1 + 0x10)) {
    if ((double)CONCAT44(DAT_0062a194,DAT_0062a190) <= dVar2) {
      if ((double)CONCAT44(DAT_0062a19c,DAT_0062a198) < dVar2) {
        dVar2 = (double)CONCAT44(DAT_0062a19c,DAT_0062a198);
      }
    }
    else {
      dVar2 = (double)CONCAT44(DAT_0062a194,DAT_0062a190);
    }
    uStack_34 = (undefined4)((ulonglong)dVar2 >> 0x20);
    local_38 = SUB84(dVar2,0);
    *(double *)(param_1 + 0x10) = dVar2;
    SfSetWindowText(param_2,&DAT_00619d20,local_38,uStack_34);
    return 1;
  }
  return 1;
}


