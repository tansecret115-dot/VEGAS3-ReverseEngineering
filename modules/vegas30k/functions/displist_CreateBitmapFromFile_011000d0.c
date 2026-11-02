/* Module: vegas30k.dll
   Function: displist_CreateBitmapFromFile
   Address: 011000d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall displist_CreateBitmapFromFile,4 */

undefined4 displist_CreateBitmapFromFile(LPCSTR param_1)

{
  int iVar1;
  HANDLE hObject;
  int iVar2;
  HGDIOBJ pvVar3;
  undefined4 uVar4;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x1000d0  1361  _displist_CreateBitmapFromFile@4 */
  local_8 = 0;
  local_10 = &local_c;
  uVar4 = 0;
  local_4 = 0;
  local_c = 8;
  local_14 = 1;
  hObject = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    return 0;
  }
  iVar2 = riff_ReadFileID(hObject,&param_1,local_18);
  if (iVar2 != 0) {
    CloseHandle(hObject);
    return 0;
  }
  displist_Load(hObject,&local_14,&param_1);
  CloseHandle(hObject);
  iVar2 = displist_GetItem(&local_14,8);
  if (((iVar2 != 0) && (iVar1 = *(int *)(iVar2 + 8), iVar1 != 0)) && (*(int *)(iVar2 + 4) != 0)) {
    pvVar3 = GetStockObject(0xf);
    if (pvVar3 != (HGDIOBJ)0x0) {
      uVar4 = FUN_01100050(iVar1,pvVar3);
    }
  }
  displist_Free(&local_14);
  return uVar4;
}


