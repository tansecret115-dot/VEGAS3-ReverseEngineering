/* Module: erv23260.dll
   Function: thunk_FUN_63817a10
   Address: 63817970
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall thunk_FUN_63817a10(undefined4 *param_1)

{
  BOOL BVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((LPVOID)*param_1 != (LPVOID)0x0) {
    BVar1 = VirtualFree((LPVOID)*param_1,param_1[1],0x4000);
    if ((BVar1 == 0) || (BVar1 = VirtualFree((LPVOID)*param_1,0,0x8000), BVar1 == 0)) {
      iVar2 = 1;
    }
    if (iVar2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    return iVar2;
  }
  return 0;
}


