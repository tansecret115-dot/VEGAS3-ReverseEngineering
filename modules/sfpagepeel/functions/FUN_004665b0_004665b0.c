/* Module: sfpagepeel.dll
   Function: FUN_004665b0
   Address: 004665b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_004665b0(void *this,HKEY param_1,uchar *param_2,DWORD param_3,byte *param_4,DWORD param_5,
            int param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  HKEY local_24;
  HKEY local_20;
  HKEY local_1c;
  HKEY__ local_18 [6];
  
  local_20 = (HKEY)0x0;
  local_1c = (HKEY)0x0;
  local_24 = (HKEY)0x0;
  pcVar4 = "00-95J86R-7XN4TW-0JM6GN";
  iVar2 = lstrcmpA((LPCSTR)param_2,"3");
  if (iVar2 == 0) {
    pcVar4 = "00-8TW00R-XXHG34-P0NNRT";
  }
  iVar2 = lstrcmpA((LPCSTR)param_2,"15");
  if ((iVar2 == 0) || (iVar2 = lstrcmpA((LPCSTR)param_2,"16"), iVar2 == 0)) {
    if (*(int *)((int)this + 0x7e0) == 0) {
      return -0x7ff8ffa9;
    }
    wsprintfA((LPSTR)local_18,"00-T8Y5QK-E3%04X-L9MGNK",*(int *)((int)this + 0x7e0));
    pcVar4 = (char *)local_18;
  }
  if ((param_1 != (HKEY)0x0) && ((char)param_1->unused != '\0')) {
    pcVar4 = (char *)param_1;
  }
  iVar2 = FUN_0046b470(*(uint *)((int)this + 0x30),(int *)&local_20,(uchar *)((int)this + 0x797));
  if ((-1 < iVar2) || (iVar2 = FUN_0046b770(*(uint *)((int)this + 0x30),&local_20), -1 < iVar2)) {
    iVar2 = FUN_0046bf30(local_20);
    if (iVar2 == 0) {
      iVar2 = -0x7ff8ffa9;
    }
    else {
      FUN_0046bab0(local_20,&local_1c);
      bVar1 = false;
      iVar2 = FUN_0046bb00(local_1c,(int)pcVar4,&local_24);
      if (iVar2 < 0) {
        bVar1 = true;
        iVar2 = FUN_0046bb80(local_1c,(HKEY)pcVar4,(int *)&local_24);
        if (iVar2 < 0) goto LAB_00466758;
      }
      else {
        iVar3 = FUN_0046bdf0(local_24);
        if (iVar3 != 0) {
          FUN_0046bd10(local_24,param_2,param_3,param_4,param_5);
          goto LAB_00466758;
        }
      }
      if ((param_6 != 0) || (bVar1)) {
        FUN_0046bd10(local_24,param_2,param_3,param_4,param_5);
        FUN_0046be80(local_24,(uint)(param_7 == 0));
      }
      else {
        iVar2 = -0x7ff8fffb;
      }
    }
  }
LAB_00466758:
  FUN_0046bef0(local_20);
  if (local_24 != (HKEY)0x0) {
    RegCloseKey(local_24);
  }
  if (local_1c != (HKEY)0x0) {
    RegCloseKey(local_1c);
  }
  if (local_20 != (HKEY)0x0) {
    RegCloseKey(local_20);
  }
  return iVar2;
}


