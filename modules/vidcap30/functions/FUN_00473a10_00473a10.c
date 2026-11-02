/* Module: vidcap30.exe
   Function: FUN_00473a10
   Address: 00473a10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00473a10(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = -0x7ffb2000;
  if (*(int *)(param_1 + 4) == 1) {
    piVar1 = (int *)(param_1 + 0x28);
    iVar2 = 0;
    if (((*(int *)(param_1 + 0x28) != 0) ||
        (((*(int *)(param_1 + 0x88) != 0 || (iVar2 = FUN_00473b20(), -1 < iVar2)) &&
         (iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x88))
                            (*(undefined4 **)(param_1 + 0x88),&DAT_00586020,piVar1), -1 < iVar2))))
       && (*piVar1 != 0)) {
      *param_2 = *piVar1;
      (**(code **)(*(int *)*piVar1 + 4))((int *)*piVar1);
    }
  }
  return iVar2;
}


