/* Module: mp3rw.dll
   Function: FUN_00411740
   Address: 00411740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00411740(void *this,DWORD param_1)

{
  uint uVar1;
  uint local_c;
  byte local_8 [4];
  DWORD local_4;
  
  local_c = (uint)(param_1 != 0);
  param_1 = 4;
  uVar1 = FUN_00414900(this,(char *)0x0,"3",&local_4,local_8,&param_1);
  FUN_00414a70(this,(HKEY)0x0,"8",4,(byte *)&local_c,4,1,(uint)((int)uVar1 < 0));
  return;
}


