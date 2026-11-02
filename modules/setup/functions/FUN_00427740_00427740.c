/* Module: Setup.exe
   Function: FUN_00427740
   Address: 00427740
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00427740(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint local_8;
  HKEY__ local_4;
  
  FUN_0042e1b0((int *)&local_8);
  uVar1 = FUN_004277a0(param_1,&local_4);
  if ((int)uVar1 < 0) {
    return -0x7ff8fffb;
  }
  if (local_8 < (uint)local_4.unused) {
    return 0;
  }
  iVar2 = FUN_0042aeb0(param_1,(HKEY)0x0,"4",4,(byte *)&local_8,4,1,1);
  return iVar2;
}


