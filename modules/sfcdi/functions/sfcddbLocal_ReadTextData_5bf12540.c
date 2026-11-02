/* Module: sfcdi.dll
   Function: sfcddbLocal_ReadTextData
   Address: 5bf12540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall sfcddbLocal_ReadTextData(char *,struct _sfcdtext *) */

long sfcddbLocal_ReadTextData(char *param_1,_sfcdtext *param_2)

{
  HANDLE hObject;
  uint uVar1;
  uchar local_104 [260];
  
                    /* 0x12540  258  ?sfcddbLocal_ReadTextData@@YGJPADPAU_sfcdtext@@@Z */
  _mbscpy(local_104,(uchar *)param_1);
  FUN_5bf232c0(local_104,0x104);
  _mbscat(local_104,(uchar *)"sfcdiddb.cdb");
  hObject = CreateFileA((LPCSTR)local_104,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0
                       );
  if (hObject == (HANDLE)0xffffffff) {
    return -0x7ffb1ff6;
  }
  uVar1 = FUN_5bf121b0(hObject,(int)param_2,(int *)0x0);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_5bf12320(hObject,param_2);
  }
  CloseHandle(hObject);
  return uVar1;
}


