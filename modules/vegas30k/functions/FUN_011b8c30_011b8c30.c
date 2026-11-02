/* Module: vegas30k.dll
   Function: FUN_011b8c30
   Address: 011b8c30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011b8c30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  
  hMem = GlobalAlloc(0x40,0x224);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  piVar2 = (int *)FUN_011b83e0(param_1);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x40))();
    if (((iVar3 < 0) || (iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,param_2), iVar3 < 0)) ||
       (iVar3 = (**(code **)(*param_1 + 0x40))(param_1,piVar2), iVar3 < 0)) {
      (**(code **)(*piVar2 + 0x3c))(1);
      piVar2 = (int *)0x0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = piVar2;
    }
    return iVar3;
  }
  return -0x7ff8fff2;
}


