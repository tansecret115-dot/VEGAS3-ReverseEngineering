/* Module: mp3rw.dll
   Function: FUN_00414c60
   Address: 00414c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00414c60(void *this,HKEY param_1,uint *param_2)

{
  HKEY pHVar1;
  uint uVar2;
  HKEY local_10;
  DWORD local_c;
  uint local_8;
  DWORD local_4;
  
  pHVar1 = param_1;
  local_10 = (HKEY)0x0;
  local_c = 4;
  uVar2 = FUN_00414900(this,(char *)param_1,"0",&local_4,(byte *)&local_10,&local_c);
  if (((-1 < (int)uVar2) || (uVar2 == 0x80070057)) && (uVar2 != 0x4e133)) {
    *param_2 = (uint)local_10 ^ *(uint *)((int)this + 0x30);
    return;
  }
  FUN_00418090((int *)&param_1);
  local_8 = *(uint *)((int)this + 0x30) ^ (uint)param_1;
  local_10 = param_1;
  FUN_00414a70(this,pHVar1,"0",4,(byte *)&local_8,local_c,0,0);
  *param_2 = (uint)local_10;
  return;
}


