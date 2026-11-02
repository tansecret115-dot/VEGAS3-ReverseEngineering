/* Module: sfcdi.dll
   Function: FUN_5bf4e850
   Address: 5bf4e850
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf4e850(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LPVOID pvVar3;
  char cVar4;
  HGLOBAL pvVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  byte bVar9;
  uint local_c;
  LPVOID local_8;
  int local_4;
  
  uVar2 = param_1;
  local_c = 0x800;
  pvVar5 = GlobalAlloc(0x42,0x800);
  local_8 = GlobalLock(pvVar5);
  if (local_8 == (LPVOID)0x0) {
    local_4 = -0x7ff8fff2;
  }
  else {
    local_4 = FUN_5bf4e650(param_1,&local_8,&local_c);
    if (((((-1 < local_4) && (local_4 = FUN_5bf4e3e0(param_1,&local_8,&local_c), -1 < local_4)) &&
         (local_4 = FUN_5bf4e140(param_1,&local_8,&local_c), -1 < local_4)) &&
        ((local_4 = FUN_5bf4ddf0(param_1,&local_8,&local_c), -1 < local_4 &&
         (local_4 = FUN_5bf4dcb0(param_1,&local_8,&local_c), -1 < local_4)))) &&
       ((local_4 = FUN_5bf4db60(param_1,&local_8,&local_c), -1 < local_4 &&
        ((local_4 = FUN_5bf4da20(param_1,&local_8,&local_c), -1 < local_4 &&
         (local_4 = FUN_5bf4d8f0(param_1,&local_8,&local_c), pvVar3 = local_8, -1 < local_4)))))) {
      *(undefined2 *)((int)local_8 + 0x100) = *(undefined2 *)(param_1 + 0x24);
      cVar4 = '\0';
      if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
        cVar4 = (char)**(undefined4 **)(param_1 + 0x28);
      }
      *(char *)((int)local_8 + 0x103) = cVar4;
      if (cVar4 != '\0') {
        piVar6 = *(int **)(param_1 + 0x28);
        if (piVar6 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar6;
        }
        if (iVar7 + -1 < 0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = *(undefined4 **)piVar6[2];
        }
        *(undefined4 *)((int)local_8 + 0x104) = *puVar8;
        *(undefined4 *)((int)local_8 + 0x108) = puVar8[1];
      }
      cVar4 = '\0';
      if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
        cVar4 = (char)**(undefined4 **)(param_1 + 0x28);
      }
      *(char *)((int)local_8 + 0x155) = cVar4;
      if (cVar4 != '\0') {
        piVar6 = *(int **)(param_1 + 0x28);
        if (piVar6 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar6;
        }
        if (iVar7 + -1 < 0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = *(undefined4 **)piVar6[2];
        }
        *(undefined4 *)((int)local_8 + 0x156) = *puVar8;
        *(undefined2 *)((int)local_8 + 0x15a) = *(undefined2 *)(puVar8 + 1);
      }
      *(undefined2 *)((int)local_8 + 0x200) = *(undefined2 *)(param_1 + 0x54);
      cVar4 = '\0';
      if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
        cVar4 = (char)**(undefined4 **)(param_1 + 0x58);
      }
      bVar9 = 0;
      *(char *)((int)local_8 + 0x203) = cVar4;
      param_1 = 0;
      if (cVar4 != '\0') {
        do {
          piVar6 = *(int **)(uVar2 + 0x58);
          if (piVar6 == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *piVar6;
          }
          if (iVar7 + -1 < (int)param_1) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = *(undefined4 **)(piVar6[2] + param_1 * 4);
          }
          bVar9 = bVar9 + 1;
          *(undefined4 *)((int)local_8 + param_1 * 8 + 0x204) = *puVar8;
          *(undefined4 *)((int)local_8 + param_1 * 8 + 0x208) = puVar8[1];
          param_1 = (uint)bVar9;
        } while (bVar9 < *(byte *)((int)local_8 + 0x203));
      }
      cVar4 = '\0';
      if (*(undefined4 **)(uVar2 + 0x5c) != (undefined4 *)0x0) {
        cVar4 = (char)**(undefined4 **)(uVar2 + 0x5c);
      }
      bVar9 = 0;
      *(char *)((int)local_8 + 0x255) = cVar4;
      param_1 = 0;
      if (cVar4 != '\0') {
        do {
          piVar6 = *(int **)(uVar2 + 0x5c);
          if (piVar6 == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *piVar6;
          }
          if (iVar7 + -1 < 0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = *(undefined4 **)piVar6[2];
          }
          iVar7 = param_1 + 0x39;
          bVar9 = bVar9 + 1;
          param_1 = (uint)bVar9;
          puVar1 = (undefined4 *)((undefined2 *)((int)local_8 + 0x100) + iVar7 * 3);
          *puVar1 = *puVar8;
          *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(puVar8 + 1);
        } while (bVar9 < *(byte *)((int)local_8 + 0x255));
      }
      memmove(local_8,"DVDVIDEO-VTS",0xc);
      *(uint *)((int)pvVar3 + 0x1c) = (((local_c & 0x7ff) != 0) - 1) + (local_c >> 0xb);
      *(undefined1 *)((int)pvVar3 + 0x21) = *(undefined1 *)(uVar2 + 1);
      *(undefined1 *)((int)pvVar3 + 0x25) = *(undefined1 *)(uVar2 + 2);
      *(undefined4 *)((int)pvVar3 + 0x80) = 0x7ff;
      piVar6 = *(int **)(uVar2 + 0x34);
      if (piVar6 == (int *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *piVar6;
      }
      if (iVar7 + -1 < 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = *(int **)piVar6[2];
      }
      iVar7 = *piVar6;
      if (*(char *)(iVar7 + 5) == '\0') {
        *(uint *)((int)pvVar3 + 0xc0) = (uint)((local_c & 0x7ff) != 0) + (local_c >> 0xb);
        *(uint *)((int)pvVar3 + 0xc4) =
             (uint)((local_c & 0x7ff) != 0) + *(int *)(iVar7 + 8) + (local_c >> 0xb);
      }
      else {
        *(uint *)((int)pvVar3 + 0xc4) = (uint)((local_c & 0x7ff) != 0) + (local_c >> 0xb);
      }
      param_1 = 0;
      *(uint *)((int)pvVar3 + 0xc) = ((uint)((local_c & 0x7ff) != 0) + (local_c >> 0xb)) * 2;
      while( true ) {
        piVar6 = *(int **)(uVar2 + 0x34);
        if (piVar6 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar6;
        }
        if (iVar7 <= (int)param_1) break;
        if (piVar6 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar6;
        }
        if (iVar7 + -1 < (int)param_1) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = *(int **)(piVar6[2] + param_1 * 4);
        }
        *(int *)((int)pvVar3 + 0xc) = *(int *)((int)pvVar3 + 0xc) + *(int *)(*piVar6 + 8);
        param_1 = (uint)(byte)((char)param_1 + 1);
      }
      *(int *)((int)pvVar3 + 0xc) = *(int *)((int)pvVar3 + 0xc) + -1;
      FUN_5bf4cb70((int)pvVar3);
      if (*(LPCVOID *)(uVar2 + 8) != (LPCVOID)0x0) {
        pvVar5 = GlobalHandle(*(LPCVOID *)(uVar2 + 8));
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(*(LPCVOID *)(uVar2 + 8));
        GlobalFree(pvVar5);
      }
      *(LPVOID *)(uVar2 + 8) = local_8;
      *(uint *)(uVar2 + 0xc) = local_c;
      return local_4;
    }
  }
  return local_4;
}


