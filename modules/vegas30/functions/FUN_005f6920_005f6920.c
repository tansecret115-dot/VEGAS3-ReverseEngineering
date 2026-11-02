/* Module: vegas30.exe
   Function: FUN_005f6920
   Address: 005f6920
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005f6920(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = -0x7ffb2000;
  if (*(int *)(param_1 + 4) == 2) {
    piVar1 = (int *)(param_1 + 0x28);
    iVar2 = 0;
    if (((*(int *)(param_1 + 0x28) != 0) ||
        (((*(int *)(param_1 + 0x88) != 0 || (iVar2 = FUN_005f6cd0(), -1 < iVar2)) &&
         (iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x88))
                            (*(undefined4 **)(param_1 + 0x88),&DAT_0060ef58,piVar1), -1 < iVar2))))
       && (*piVar1 != 0)) {
      *param_2 = *piVar1;
      (**(code **)(*(int *)*piVar1 + 4))((int *)*piVar1);
    }
  }
  return iVar2;
}


