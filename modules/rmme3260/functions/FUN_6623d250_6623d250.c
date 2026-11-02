/* Module: rmme3260.dll
   Function: FUN_6623d250
   Address: 6623d250
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6623d250(int param_1)

{
  FILE *_File;
  undefined4 uVar1;
  BOOL BVar2;
  char *pcVar3;
  tagRECT local_20;
  HDC local_10;
  int local_c;
  LPRGNDATA local_8;
  
  _File = fopen(s_d__expose_txt_66270114,&DAT_66270124);
  fprintf(_File,s_Site__p_66270108,param_1);
  fprintf(_File,s_Parent_List__662700f8);
  for (local_c = *(int *)(param_1 + 0x68); local_c != 0; local_c = *(int *)(local_c + 0x68)) {
    fprintf(_File,&DAT_662700f4,local_c);
  }
  fprintf(_File,&DAT_662700f0);
  fprintf(_File,s_Size___d___d__662700e0,*(undefined4 *)(param_1 + 0xac),
          *(undefined4 *)(param_1 + 0xb0));
  local_10 = *(HDC *)(param_1 + 0xd0);
  local_c = *(int *)(param_1 + 0xcc);
  uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x14))((int *)(param_1 + 4));
  fprintf(_File,s_Bounding_Rect____d___d______d____6627009c,local_c,local_10,
          local_c + *(int *)(param_1 + 0xac),(int)local_10 + *(int *)(param_1 + 0xb0),
          *(undefined4 *)(param_1 + 0xdc),uVar1);
  fprintf(_File,s_Bounding_Rect__absolulte_____d____6627006c,*(int *)(param_1 + 0xd4),
          *(int *)(param_1 + 0xd8),*(int *)(param_1 + 0xd4) + *(int *)(param_1 + 0xac),
          *(int *)(param_1 + 0xd8) + *(int *)(param_1 + 0xb0));
  fprintf(_File,s_list_of_rects__6627005c);
  local_10 = (HDC)GetRegionData(*(HRGN *)(param_1 + 0x134),0,(LPRGNDATA)0x0);
  local_8 = operator_new((uint)local_10);
  GetRegionData(*(HRGN *)(param_1 + 0x134),(DWORD)local_10,local_8);
  local_c = 0;
  if (0 < (int)(local_8->rdh).nCount) {
    local_10 = (HDC)0x0;
    do {
      fprintf(_File,s_Rect___d___d_____d___d__66270040,
              *(undefined4 *)(local_8->Buffer + (int)local_10),
              *(undefined4 *)(local_8[1].Buffer + ((int)local_10 - 0x20)),
              *(undefined4 *)(local_8[1].Buffer + ((int)local_10 - 0x1c)),
              *(undefined4 *)(local_8[1].Buffer + ((int)local_10 - 0x18)));
      local_10 = (HDC)((int)local_10 + 0x10);
      local_c = local_c + 1;
    } while (local_c < (int)(local_8->rdh).nCount);
  }
  if (local_8 != (LPRGNDATA)0x0) {
    operator_delete(local_8);
  }
  fprintf(_File,s_list_of_rects_without_children__6627001c);
  local_10 = (HDC)GetRegionData(*(HRGN *)(param_1 + 0x138),0,(LPRGNDATA)0x0);
  local_8 = operator_new((uint)local_10);
  GetRegionData(*(HRGN *)(param_1 + 0x138),(DWORD)local_10,local_8);
  local_c = 0;
  if (0 < (int)(local_8->rdh).nCount) {
    local_10 = (HDC)0x0;
    do {
      fprintf(_File,s_Rect___d___d_____d___d__66270040,
              *(undefined4 *)(local_8->Buffer + (int)local_10),
              *(undefined4 *)((int)&local_10[-8].unused + (int)local_8[1].Buffer),
              *(undefined4 *)((int)&local_8[1].rdh.iType + (int)local_10),
              *(undefined4 *)((int)&local_8[1].rdh.nCount + (int)local_10));
      local_10 = local_10 + 4;
      local_c = local_c + 1;
    } while (local_c < (int)(local_8->rdh).nCount);
  }
  fprintf(_File,s_HWND___p_66270010,*(undefined4 *)(param_1 + 0x144));
  if (*(HWND *)(param_1 + 0x144) != (HWND)0x0) {
    local_10 = (HDC)&DAT_66270008;
    if (*(int *)(param_1 + 0xe0) == 0) {
      local_10 = (HDC)s_FALSE_66270000;
    }
    BVar2 = IsWindowVisible(*(HWND *)(param_1 + 0x144));
    pcVar3 = &DAT_66270008;
    if (BVar2 == 0) {
      pcVar3 = s_FALSE_66270000;
    }
    fprintf(_File,s_Actual_Visible___s_Internal_Visi_6626ffd4,pcVar3,local_10);
    local_10 = (HDC)GetParent(*(HWND *)(param_1 + 0x144));
    fprintf(_File,s_Parent_HWND___p_6626ffc0,local_10);
    GetWindowRect(*(HWND *)(param_1 + 0x144),&local_20);
    fprintf(_File,s_WindowRect____d___d______d___d__6626ff9c,local_20.left,local_20.top,
            local_20.right,local_20.bottom);
    GetClientRect(*(HWND *)(param_1 + 0x144),&local_20);
    fprintf(_File,s_ClientRect____d___d______d___d__6626ff78,local_20.left,local_20.top,
            local_20.right,local_20.bottom);
    MapWindowPoints(*(HWND *)(param_1 + 0x144),(HWND)local_10,(LPPOINT)&local_20,2);
    fprintf(_File,s_ClientRect_in_Parent_Coords____d_6626ff44,local_20.left,local_20.top,
            local_20.right,local_20.bottom);
    local_10 = GetDC(*(HWND *)(param_1 + 0x144));
    GetClipBox(local_10,&local_20);
    ReleaseDC(*(HWND *)(param_1 + 0x144),local_10);
    fprintf(_File,s_Clip_Box____d___d______d___d__6626ff24,local_20.left,local_20.top,local_20.right
            ,local_20.bottom);
  }
  fprintf(_File,s_WindowRect___p_6626ff10,*(undefined4 *)(param_1 + 0x144));
  if (local_8 != (LPRGNDATA)0x0) {
    operator_delete(local_8);
  }
  fprintf(_File,s__________________________________6626fecc);
  fclose(_File);
  return;
}


