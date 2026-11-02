/* Module: rmto3260.dll
   Function: FUN_663055c0
   Address: 663055c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_663055c0(void *this,void *param_1)

{
  LSTATUS LVar1;
  CHAR local_114 [128];
  CHAR local_94 [128];
  _FILETIME local_14;
  DWORD local_c [2];
  
  if (*(int *)((int)this + 0x24) != 0) {
    local_c[0] = 0x80;
    local_c[1] = 0x80;
    LVar1 = RegEnumKeyExA(*(HKEY *)((int)this + 8),*(DWORD *)((int)this + 0x18),local_94,local_c,
                          (LPDWORD)0x0,local_114,local_c + 1,&local_14);
    if (LVar1 == 0) {
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
      FUN_66305540(param_1,*(undefined4 *)((int)this + 8));
      FUN_66305560(param_1,local_94);
      FUN_66305520(param_1,*(undefined4 *)((int)this + 0x20));
      return 1;
    }
  }
  return 0;
}


