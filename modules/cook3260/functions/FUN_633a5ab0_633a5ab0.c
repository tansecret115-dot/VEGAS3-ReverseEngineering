/* Module: cook3260.dll
   Function: FUN_633a5ab0
   Address: 633a5ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_633a5ab0(void *this,int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_c;
  uint local_8;
  
  iVar3 = 0;
  local_c = 1;
  iVar2 = FUN_633a39b0(this,&local_8);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + (local_8 + iVar3 * 2) * 4);
    if (iVar3 < 1) break;
    local_c = local_c + 1;
    iVar2 = FUN_633a39b0(this,&local_8);
  }
  if (iVar3 == 0) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  *param_2 = -1 - iVar3;
  return local_c;
}


