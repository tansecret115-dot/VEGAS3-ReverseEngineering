/* Module: rmbe3260.dll
   Function: FUN_66010f40
   Address: 66010f40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_66010f40(void *this,int param_1,int param_2)

{
  int iVar1;
  byte local_1c [4];
  undefined1 local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  strncpy((char *)&local_10,&DAT_6606cc30,4);
  strncpy((char *)&local_c,&DAT_6606cc28,4);
  if ((param_1 == local_c) && ((param_2 == 7 || (param_2 == 0xe)))) {
    local_8 = local_10;
  }
  else {
    local_8 = param_1;
  }
  strncpy((char *)local_1c,(char *)&local_8,4);
  local_18 = 0;
  iVar1 = FUN_6605cad0((void *)((int)this + 4),local_1c,(int *)&local_14);
  return -(uint)(iVar1 != 0) & local_14;
}


