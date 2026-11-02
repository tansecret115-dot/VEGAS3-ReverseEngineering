/* Module: sfxpfx1.dll
   Function: FUN_5c97f8d0
   Address: 5c97f8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5c97f8d0(void *this,HKEY param_1,HKEY param_2)

{
  int iVar1;
  LSTATUS LVar2;
  uchar local_1c [28];
  
  iVar1 = FUN_5c97f9f0(this,local_1c,(int)param_1,(uint)param_2);
  if (-1 < iVar1) {
    LVar2 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)((int)this + 0x70),0,0x20006,&param_1);
    if (LVar2 == 0) {
      LVar2 = RegOpenKeyExA(param_1,"License",0,0x20006,&param_2);
      if (LVar2 == 0) {
        LVar2 = RegSetValueExA(param_2,"CurrentKey",0,1,local_1c,0x19);
        if (LVar2 == 0) {
          iVar1 = 0;
        }
        RegCloseKey(param_2);
      }
      RegCloseKey(param_1);
    }
  }
  return iVar1;
}


