/* Module: hhupd.exe
   Function: FUN_010065c0
   Address: 010065c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_010065c0(undefined4 *param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  short sVar5;
  
  sVar1 = *(short *)(param_1 + 0x1c);
  sVar5 = *(short *)((int)param_1 + 0x72) + 1;
  param_1[0x1f0] = (int)param_1 + 0x3b7;
  param_1[0x1f1] = param_1 + 0x12e;
  param_1[0x1f2] = (int)param_1 + 0x5b9;
  param_1[499] = param_1[0xe];
  *(short *)((int)param_1 + 0x7da) = sVar1;
  *(short *)(param_1 + 0x1f7) = sVar5;
  param_1[0x1f8] = 0;
  do {
    bVar2 = false;
    if (param_1[0x21] != -1) {
      iVar4 = (*(code *)param_1[6])(param_1[0x21]);
      if (iVar4 != 0) goto LAB_010066f3;
    }
    if (param_1[0x22] != -1) {
      iVar4 = (*(code *)param_1[6])(param_1[0x22]);
      if (iVar4 != 0) {
LAB_010066f3:
        FUN_01007370((undefined4 *)*param_1,4,0);
        return 0;
      }
    }
    param_1[0x22] = 0xffffffff;
    param_1[0x21] = 0xffffffff;
    iVar4 = (*(code *)param_1[9])(4,param_1 + 0x1ef);
    if (iVar4 == -1) {
      FUN_01007370((undefined4 *)*param_1,0xb,0);
      return 0;
    }
    bVar3 = FUN_01005f20(param_1,(char *)((int)param_1 + 0x3b7),sVar1,sVar5);
    if (CONCAT31(extraout_var,bVar3) == 0) {
LAB_0100669a:
      if (*(int *)*param_1 == 0xb) {
        return 0;
      }
      bVar2 = true;
    }
    else {
      iVar4 = FUN_01006890(param_1,0);
      if (iVar4 == 0) goto LAB_0100669a;
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
        iVar4 = FUN_010069b0(param_1);
      } while (iVar4 != 0);
      return 0;
    }
  } while( true );
}


