/* Module: vidcap30.exe
   Function: FUN_004a1560
   Address: 004a1560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004a1560(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  HWND hWnd;
  LPCSTR lpString2;
  LRESULT LVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  WPARAM wParam;
  undefined4 local_418;
  char local_410;
  char local_40f;
  undefined1 local_30d;
  char local_30c;
  char local_30b;
  undefined1 local_208;
  undefined4 auStack_207 [129];
  
  local_418 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    hWnd = *(HWND *)(param_3 + 0x18);
    lpString2 = (LPCSTR)**(undefined4 **)(param_1 + 8);
    if ((*(uint *)(param_3 + 0x4a4) & 0x400) == 0) {
      if ((*(uint *)(param_3 + 0x4a4) & 0x200) == 0) {
        wParam = 9;
      }
      else {
        wParam = 8;
      }
      LVar2 = SendMessageA(hWnd,0x110a,wParam,0);
      if (LVar2 != 0) {
        FUN_004f8340(hWnd,LVar2,&local_208);
        goto LAB_004a1636;
      }
    }
    else {
      LVar2 = SendMessageA(hWnd,0x110a,9,0);
      if (LVar2 != 0) {
        iVar3 = FUN_004f8340(hWnd,LVar2,&local_208);
        (&local_208)[iVar3] = 0x5c;
        uVar1 = *(ushort *)(param_2 + 0x10);
        puVar6 = (undefined4 *)(param_2 + 0x14);
        puVar7 = (undefined4 *)((int)auStack_207 + iVar3);
        for (uVar5 = (uint)(uVar1 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
LAB_004a1636:
        lstrcpynA(&local_410,lpString2,0x104);
        local_30d = 0;
        puVar4 = (undefined1 *)_SfGetFileNamePtrA_4(&local_410);
        *puVar4 = 0;
        FUN_004a0180(**(undefined4 **)(param_2 + 0xc),&local_208,&local_30c);
        if (((((local_410 == '\\') && (local_40f == '\\')) && (local_30b == ':')) ||
            (((local_30c == '\\' && (local_30b == '\\')) && (local_40f == ':')))) ||
           ((((local_410 != '\\' || (local_40f != '\\')) && (local_40f == ':')) &&
            ((local_30b == ':' && (local_410 != local_30c)))))) {
          local_418 = 1;
        }
        return local_418;
      }
    }
  }
  return 0;
}


