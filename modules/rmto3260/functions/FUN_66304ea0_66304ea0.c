/* Module: rmto3260.dll
   Function: FUN_66304ea0
   Address: 66304ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66304ea0(void *this,undefined4 param_1)

{
  LSTATUS LVar1;
  uint uVar2;
  char local_208 [512];
  HKEY local_8;
  
  LVar1 = RegOpenKeyA((HKEY)0x80000000,(LPCSTR)((int)this + 0xc),&local_8);
  if (LVar1 == 0) {
    uVar2 = 1;
    do {
      sprintf(local_208,&DAT_66311c38,param_1,uVar2 & 0xffff);
      uVar2 = uVar2 + 1;
      LVar1 = RegDeleteKeyA(local_8,local_208);
    } while (LVar1 == 0);
    RegCloseKey(local_8);
  }
  return 0;
}


