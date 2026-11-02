/* Module: vegas30k.dll
   Function: FUN_0108b470
   Address: 0108b470
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0108b470(uint param_1)

{
  int iVar1;
  tagVTSI_MAT *ptVar2;
  tagVTSI_MAT tVar3;
  HGLOBAL pvVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  tagVTSI_MAT *ptVar8;
  tagVTSI_MAT tVar9;
  uint local_c;
  tagVTSI_MAT *local_8;
  int local_4;
  
  iVar1 = param_1;
  local_c = 0x800;
  pvVar4 = GlobalAlloc(0x42,0x800);
  local_8 = GlobalLock(pvVar4);
  if (local_8 == (tagVTSI_MAT *)0x0) {
    local_4 = -0x7ff8fff2;
  }
  else {
    local_4 = FUN_0108b270(param_1,&local_8,&local_c);
    if (((((-1 < local_4) && (local_4 = FUN_0108b000(param_1,&local_8,&local_c), -1 < local_4)) &&
         (local_4 = FUN_0108ad60(param_1,&local_8,&local_c), -1 < local_4)) &&
        ((local_4 = FUN_0108aa10(param_1,&local_8,&local_c), -1 < local_4 &&
         (local_4 = FUN_0108a8d0(param_1,&local_8,&local_c), -1 < local_4)))) &&
       ((local_4 = FUN_0108a780(param_1,&local_8,&local_c), -1 < local_4 &&
        ((local_4 = FUN_0108a640(param_1,&local_8,&local_c), -1 < local_4 &&
         (local_4 = FUN_0108a510(param_1,&local_8,&local_c), ptVar2 = local_8, -1 < local_4)))))) {
      ptVar8 = local_8 + 0x100;
      *(undefined2 *)ptVar8 = *(undefined2 *)(param_1 + 0x24);
      tVar3 = (tagVTSI_MAT)0x0;
      if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
        tVar3 = SUB41(**(undefined4 **)(param_1 + 0x28),0);
      }
      local_8[0x103] = tVar3;
      if (tVar3 != (tagVTSI_MAT)0x0) {
        piVar5 = *(int **)(param_1 + 0x28);
        if (piVar5 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar5;
        }
        if (iVar6 + -1 < 0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = *(undefined4 **)piVar5[2];
        }
        *(undefined4 *)(local_8 + 0x104) = *puVar7;
        *(undefined4 *)(local_8 + 0x108) = puVar7[1];
      }
      tVar3 = (tagVTSI_MAT)0x0;
      if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
        tVar3 = SUB41(**(undefined4 **)(param_1 + 0x28),0);
      }
      local_8[0x155] = tVar3;
      if (tVar3 != (tagVTSI_MAT)0x0) {
        piVar5 = *(int **)(param_1 + 0x28);
        if (piVar5 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar5;
        }
        if (iVar6 + -1 < 0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = *(undefined4 **)piVar5[2];
        }
        *(undefined4 *)(local_8 + 0x156) = *puVar7;
        *(undefined2 *)(local_8 + 0x15a) = *(undefined2 *)(puVar7 + 1);
      }
      *(undefined2 *)(local_8 + 0x200) = *(undefined2 *)(param_1 + 0x54);
      tVar3 = (tagVTSI_MAT)0x0;
      if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
        tVar3 = SUB41(**(undefined4 **)(param_1 + 0x58),0);
      }
      tVar9 = (tagVTSI_MAT)0x0;
      local_8[0x203] = tVar3;
      param_1 = 0;
      if (tVar3 != (tagVTSI_MAT)0x0) {
        do {
          piVar5 = *(int **)(iVar1 + 0x58);
          if (piVar5 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar5;
          }
          if (iVar6 + -1 < (int)param_1) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = *(undefined4 **)(piVar5[2] + param_1 * 4);
          }
          tVar9 = (tagVTSI_MAT)((char)tVar9 + 1);
          *(undefined4 *)(local_8 + param_1 * 8 + 0x204) = *puVar7;
          *(undefined4 *)(local_8 + param_1 * 8 + 0x208) = puVar7[1];
          param_1 = (uint)(byte)tVar9;
        } while ((byte)tVar9 < (byte)local_8[0x203]);
      }
      tVar3 = (tagVTSI_MAT)0x0;
      if (*(undefined4 **)(iVar1 + 0x5c) != (undefined4 *)0x0) {
        tVar3 = SUB41(**(undefined4 **)(iVar1 + 0x5c),0);
      }
      tVar9 = (tagVTSI_MAT)0x0;
      local_8[0x255] = tVar3;
      param_1 = 0;
      if (tVar3 != (tagVTSI_MAT)0x0) {
        do {
          piVar5 = *(int **)(iVar1 + 0x5c);
          if (piVar5 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar5;
          }
          if (iVar6 + -1 < 0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = *(undefined4 **)piVar5[2];
          }
          iVar6 = param_1 + 0x39;
          tVar9 = (tagVTSI_MAT)((char)tVar9 + 1);
          param_1 = (uint)(byte)tVar9;
          *(undefined4 *)(ptVar8 + iVar6 * 6) = *puVar7;
          *(undefined2 *)(ptVar8 + iVar6 * 6 + 4) = *(undefined2 *)(puVar7 + 1);
        } while ((byte)tVar9 < (byte)local_8[0x255]);
      }
      memmove(local_8,"DVDVIDEO-VTS",0xc);
      *(uint *)(ptVar2 + 0x1c) = (((local_c & 0x7ff) != 0) - 1) + (local_c >> 0xb);
      ptVar2[0x21] = *(tagVTSI_MAT *)(iVar1 + 1);
      ptVar2[0x25] = *(tagVTSI_MAT *)(iVar1 + 2);
      *(undefined4 *)(ptVar2 + 0x80) = 0x7ff;
      piVar5 = *(int **)(iVar1 + 0x34);
      if (piVar5 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar5;
      }
      if (iVar6 + -1 < 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = *(int **)piVar5[2];
      }
      iVar6 = *piVar5;
      if (*(char *)(iVar6 + 5) == '\0') {
        *(uint *)(ptVar2 + 0xc0) = (uint)((local_c & 0x7ff) != 0) + (local_c >> 0xb);
        *(uint *)(ptVar2 + 0xc4) =
             (uint)((local_c & 0x7ff) != 0) + *(int *)(iVar6 + 8) + (local_c >> 0xb);
      }
      else {
        *(uint *)(ptVar2 + 0xc4) = (uint)((local_c & 0x7ff) != 0) + (local_c >> 0xb);
      }
      param_1 = 0;
      *(uint *)(ptVar2 + 0xc) = ((uint)((local_c & 0x7ff) != 0) + (local_c >> 0xb)) * 2;
      while( true ) {
        piVar5 = *(int **)(iVar1 + 0x34);
        if (piVar5 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar5;
        }
        if (iVar6 <= (int)param_1) break;
        if (piVar5 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *piVar5;
        }
        if (iVar6 + -1 < (int)param_1) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = *(int **)(piVar5[2] + param_1 * 4);
        }
        *(int *)(ptVar2 + 0xc) = *(int *)(ptVar2 + 0xc) + *(int *)(*piVar5 + 8);
        param_1 = (uint)(byte)((char)param_1 + 1);
      }
      *(int *)(ptVar2 + 0xc) = *(int *)(ptVar2 + 0xc) + -1;
      SfCdiSwap_VTSI_MAT(ptVar2);
      if (*(LPCVOID *)(iVar1 + 8) != (LPCVOID)0x0) {
        pvVar4 = GlobalHandle(*(LPCVOID *)(iVar1 + 8));
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(*(LPCVOID *)(iVar1 + 8));
        GlobalFree(pvVar4);
      }
      *(tagVTSI_MAT **)(iVar1 + 8) = local_8;
      *(uint *)(iVar1 + 0xc) = local_c;
      return local_4;
    }
  }
  return local_4;
}


