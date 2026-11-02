/* Module: erv33260.dll
   Function: FUN_67079550
   Address: 67079550
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_67079550(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  iVar3 = 0;
  uVar2 = FUN_6707ba70(*(void **)(param_1 + 0x174),&local_c,&local_8);
  cVar1 = (char)uVar2;
  while ((cVar1 != '\0' &&
         (iVar3 = FUN_6707b9d0(*(void **)(param_1 + 0x170),local_c,local_8), iVar3 == 0))) {
    uVar2 = FUN_6707ba70(*(void **)(param_1 + 0x174),&local_c,&local_8);
    cVar1 = (char)uVar2;
  }
  return iVar3;
}


