/* Module: hhupd.exe
   Function: FUN_01006890
   Address: 01006890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01006890(undefined4 *param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  
  param_1[0x24] = param_2;
  iVar3 = (*(code *)param_1[7])(param_1[0x21],param_1[0x29] * param_2 + param_1[0xb],0);
  if (iVar3 != -1) {
    iVar3 = param_1[0x29];
    iVar4 = (*(code *)param_1[4])(param_1[0x21],param_1[0x11],iVar3);
    if (iVar4 == iVar3) {
      iVar3 = (*(code *)param_1[7])(param_1[0x21],*(undefined4 *)param_1[0x11],0);
      if (iVar3 != -1) {
        *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_1[0x11] + 4);
        bVar1 = FUN_01006d00(*(short *)(param_1[0x11] + 6),param_1);
        if (CONCAT31(extraout_var,bVar1) == 0) {
          return 0;
        }
        if (param_1[10] != 0) {
          param_1[0x1f9] = 1;
          param_1[0x1fa] = param_1[0xe];
          sVar2 = (short)param_1[0x29] + -8;
          *(short *)(param_1 + 0x1fc) = sVar2;
          if (sVar2 == 0) {
            param_1[0x1fb] = 0;
          }
          else {
            param_1[0x1fb] = param_1[0x11] + 8;
          }
          *(short *)((int)param_1 + 0x7f2) = (short)param_2;
          iVar3 = (*(code *)param_1[10])(param_1 + 0x1f9);
          if (iVar3 == -1) {
            FUN_01007370((undefined4 *)*param_1,0xb,0);
            return 0;
          }
        }
        return 1;
      }
    }
  }
  FUN_01007370((undefined4 *)*param_1,4,0);
  return 0;
}


