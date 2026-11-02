/* Module: g2plug.dll
   Function: FUN_5f8162b0
   Address: 5f8162b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f8162b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 *unaff_retaddr;
  
  iVar1 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),&param_1);
  if (-1 < iVar2) {
    *unaff_retaddr = unaff_ESI;
    unaff_retaddr[1] = 0;
    *(undefined4 *)(iVar1 + 0x50) = unaff_ESI;
  }
  return;
}


