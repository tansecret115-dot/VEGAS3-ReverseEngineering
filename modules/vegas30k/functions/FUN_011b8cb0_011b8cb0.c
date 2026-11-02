/* Module: vegas30k.dll
   Function: FUN_011b8cb0
   Address: 011b8cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011b8cb0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = -0x7ff8fff2;
  hMem = GlobalAlloc(0x40,0x224);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    piVar2 = (int *)FUN_011b8070(param_1,1);
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0x40))();
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2,param_2);
        if (-1 < iVar3) {
          (**(code **)(*piVar2 + 0x20))(piVar2,param_3);
          iVar3 = (**(code **)(*param_1 + 0x40))(param_1,piVar2);
          if (-1 < iVar3) goto LAB_011b8d23;
        }
      }
      (**(code **)(*piVar2 + 0x3c))(1);
    }
  }
  piVar2 = (int *)0x0;
LAB_011b8d23:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = piVar2;
  }
  return iVar3;
}


