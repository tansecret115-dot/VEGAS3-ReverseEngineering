/* Module: wavplug.dll
   Function: FUN_5f387ab0
   Address: 5f387ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f387ab0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_retaddr;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
  if (-1 < iVar2) {
    if (unaff_retaddr < unaff_ESI) {
      if (piVar1[0x96] == 0) {
        iVar2 = FUN_5f3879e0(piVar1);
      }
      if (-1 < iVar2) {
        *param_1 = *(int *)(piVar1[0x96] + unaff_retaddr * 0x28);
        *param_2 = *(undefined4 *)(piVar1[0x96] + 4 + unaff_retaddr * 0x28);
        return iVar2;
      }
    }
    else {
      iVar2 = -0x7ff8ffa9;
    }
  }
  return iVar2;
}


