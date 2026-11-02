/* Module: vegas30k.dll
   Function: FUN_0119a2c0
   Address: 0119a2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0119a2c0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x184))(param_3,param_4,param_5,param_6,param_7);
  if ((-1 < iVar1) && (piVar2 = (int *)param_1[0x182], piVar2 != (int *)0x0)) {
    while (-1 < param_4) {
      if (*piVar2 == 1) {
        uVar3 = ftol();
        piVar2[0x16] = (int)uVar3;
        piVar2[0x14] = 0;
        piVar2[0x17] = (int)((ulonglong)uVar3 >> 0x20);
        piVar2[0x15] = 0;
        return iVar1;
      }
      piVar2 = (int *)piVar2[0x5b];
      if (piVar2 == (int *)0x0) {
        return iVar1;
      }
    }
  }
  return iVar1;
}


