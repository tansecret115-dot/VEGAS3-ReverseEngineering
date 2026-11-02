/* Module: wavplug.dll
   Function: FUN_5f3bced0
   Address: 5f3bced0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5f3bced0(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_8;
  HKEY__ local_4;
  
  FUN_5f3c39a0((int *)&local_8);
  uVar1 = FUN_5f3bcf30(param_1,&local_4);
  if ((int)uVar1 < 0) {
    return -0x7ff8fffb;
  }
  if (local_8 < (uint)local_4.unused) {
    return 0;
  }
  iVar2 = FUN_5f3c0640(param_1,(HKEY)0x0,"4",4,(byte *)&local_8,4,1,1);
  return iVar2;
}


