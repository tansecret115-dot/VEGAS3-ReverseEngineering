/* Module: 50comupd.exe
   Function: FUN_01006438
   Address: 01006438
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01006438(undefined4 *param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  short sVar5;
  undefined4 uVar6;
  
  sVar1 = *(short *)(param_1 + 0x1c);
  sVar5 = *(short *)((int)param_1 + 0x72) + 1;
  param_1[0x1f0] = (int)param_1 + 0x3b7;
  param_1[0x1f1] = param_1 + 0x12e;
  param_1[0x1f2] = (int)param_1 + 0x5b9;
  param_1[0x1f8] = 0;
  param_1[499] = param_1[0xe];
  *(short *)((int)param_1 + 0x7da) = sVar1;
  *(short *)(param_1 + 0x1f7) = sVar5;
  while( true ) {
    bVar2 = false;
    if ((param_1[0x21] != -1) && (iVar4 = (*(code *)param_1[6])(param_1[0x21]), iVar4 != 0)) break;
    if ((param_1[0x22] != -1) && (iVar4 = (*(code *)param_1[6])(param_1[0x22]), iVar4 != 0)) break;
    param_1[0x22] = 0xffffffff;
    param_1[0x21] = 0xffffffff;
    iVar4 = (*(code *)param_1[9])(4,param_1 + 0x1ef);
    if (iVar4 == -1) {
      uVar6 = 0xb;
      goto LAB_0100651f;
    }
    bVar3 = FUN_01005f6b(param_1,(char *)((int)param_1 + 0x3b7),sVar1,sVar5);
    if ((CONCAT31(extraout_var,bVar3) == 0) || (iVar4 = FUN_01006661(param_1,0), iVar4 == 0)) {
      if (*(int *)*param_1 == 0xb) {
        return 0;
      }
      bVar2 = true;
    }
    param_1[0x1f8] = *(undefined4 *)*param_1;
    if (!bVar2) {
      *(short *)((int)param_1 + 0xae) = *(short *)((int)param_1 + 0xae) + 1;
      do {
        if (*(short *)((int)param_1 + 0xae) == 0) {
          param_1[0x27] = 1;
          return 1;
        }
        *(short *)(param_1 + 0x2b) = *(short *)(param_1 + 0x2b) + -1;
        *(short *)((int)param_1 + 0xae) = *(short *)((int)param_1 + 0xae) + -1;
        iVar4 = FUN_01006750(param_1);
      } while (iVar4 != 0);
      return 0;
    }
  }
  uVar6 = 4;
LAB_0100651f:
  FUN_01006dcb((undefined4 *)*param_1,uVar6,0);
  return 0;
}


