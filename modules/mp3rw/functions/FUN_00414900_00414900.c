/* Module: mp3rw.dll
   Function: FUN_00414900
   Address: 00414900
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall
FUN_00414900(void *this,char *param_1,uchar *param_2,LPDWORD param_3,byte *param_4,LPDWORD param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  HKEY local_24;
  HKEY local_20;
  HKEY local_1c;
  CHAR local_18 [24];
  
  local_24 = (HKEY)0x0;
  local_1c = (HKEY)0x0;
  local_20 = (HKEY)0x0;
  pcVar3 = "00-95J86R-7XN4TW-0JM6GN";
  iVar1 = lstrcmpA((LPCSTR)param_2,"3");
  if (iVar1 == 0) {
    pcVar3 = "00-8TW00R-XXHG34-P0NNRT";
  }
  iVar1 = lstrcmpA((LPCSTR)param_2,"15");
  if (iVar1 == 0) {
LAB_0041494f:
    if (*(int *)((int)this + 0x7e0) == 0) {
      return 0x80070057;
    }
    wsprintfA(local_18,"00-T8Y5QK-E3%04X-L9MGNK",*(int *)((int)this + 0x7e0));
    pcVar3 = local_18;
  }
  else {
    iVar1 = lstrcmpA((LPCSTR)param_2,"16");
    if (iVar1 == 0) goto LAB_0041494f;
  }
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar3 = param_1;
  }
  iVar1 = FUN_00419ef0(*(uint *)((int)this + 0x30),(int *)&local_24,(uchar *)((int)this + 0x797));
  if (iVar1 < 0) {
    uVar2 = FUN_00419a70(*(uint *)((int)this + 0x30),&local_24,(uchar *)((int)this + 0x797));
    if ((int)uVar2 < 0) goto LAB_00414a39;
  }
  iVar1 = FUN_0041a9b0(local_24);
  if (iVar1 == 0) {
    uVar2 = 0x80070057;
  }
  else {
    iVar1 = FUN_0041a530(local_24,&local_1c);
    if (iVar1 < 0) {
      uVar2 = 0x80070005;
    }
    else {
      uVar2 = FUN_0041a580(local_1c,(int)pcVar3,&local_20);
      if (-1 < (int)uVar2) {
        uVar2 = FUN_0041a680(local_20,param_2,param_3,param_4,param_5);
        if (-1 < (int)uVar2) {
          iVar1 = FUN_0041a870(local_20);
          if (iVar1 != 0) {
            uVar2 = 0x4e133;
          }
        }
      }
    }
  }
LAB_00414a39:
  if (local_20 != (HKEY)0x0) {
    RegCloseKey(local_20);
  }
  if (local_1c != (HKEY)0x0) {
    RegCloseKey(local_1c);
  }
  if (local_24 != (HKEY)0x0) {
    RegCloseKey(local_24);
  }
  return uVar2;
}


