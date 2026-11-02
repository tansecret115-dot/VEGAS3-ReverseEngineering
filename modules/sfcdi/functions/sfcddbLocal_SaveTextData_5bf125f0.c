/* Module: sfcdi.dll
   Function: sfcddbLocal_SaveTextData
   Address: 5bf125f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall sfcddbLocal_SaveTextData(char *,struct _sfcdtext *) */

long sfcddbLocal_SaveTextData(char *param_1,_sfcdtext *param_2)

{
  HANDLE hObject;
  int iVar1;
  uint uVar2;
  DWORD local_114;
  int local_110;
  LONG local_10c;
  ulong local_108;
  uchar local_104 [260];
  
                    /* 0x125f0  259  ?sfcddbLocal_SaveTextData@@YGJPADPAU_sfcdtext@@@Z */
  _mbscpy(local_104,(uchar *)param_1);
  FUN_5bf232c0(local_104,0x104);
  _mbscat(local_104,(uchar *)"sfcdiddb.cdb");
  hObject = CreateFileA((LPCSTR)local_104,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0
                       );
  if (hObject == (HANDLE)0xffffffff) {
    return -0x7ffb1ff9;
  }
  iVar1 = FUN_5bf12140(hObject,(int *)&local_114);
  if (iVar1 < 0) {
    CloseHandle(hObject);
    hObject = CreateFileA((LPCSTR)local_104,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                          (HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffff) {
      return -0x7ffb1ffa;
    }
    local_114 = 0;
    iVar1 = FUN_5bf34150(hObject,0x42544443,0);
    if (iVar1 != 0) goto LAB_5bf1272f;
  }
  else {
    uVar2 = FUN_5bf121b0(hObject,(int)param_2,&local_110);
    if (-1 < (int)uVar2) {
      iVar1 = FUN_5bf10cd0(param_2);
      local_110 = local_110 + 0xc;
      if (iVar1 == local_110) {
        iVar1 = cdtext_RiffSave(hObject,param_2,1,&local_108);
        goto LAB_5bf1272f;
      }
      FUN_5bf10f10(hObject);
    }
  }
  local_110 = 0;
  local_10c = 0;
  SetFilePointer(hObject,0,&local_10c,2);
  iVar1 = cdtext_RiffSave(hObject,param_2,1,&local_108);
  if (-1 < iVar1) {
    local_110 = 0;
    local_114 = local_114 + 4 + local_108;
    local_10c = 0;
    SetFilePointer(hObject,0,&local_10c,0);
    iVar1 = FUN_5bf34150(hObject,0x42544443,local_114);
  }
LAB_5bf1272f:
  CloseHandle(hObject);
  return iVar1;
}


