/* Module: sftrans1.dll
   Function: FUN_0047ed60
   Address: 0047ed60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0047ed60(int param_1,int param_2,undefined4 *param_3)

{
  LPCVOID pMem;
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 local_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 *puStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  int iStack_24c;
  undefined4 uStack_248;
  undefined4 *puStack_244;
  undefined1 auStack_234 [8];
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined1 *puStack_224;
  undefined1 *puStack_220;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 *puStack_ec;
  undefined4 *puStack_e8;
  undefined1 auStack_e4 [224];
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (((((*(int *)(param_1 + 0x414) != 0) && (*(int *)(param_1 + 0x418) != 0)) &&
       (*(int *)(param_1 + 0x41c) != 0)) &&
      ((*(int *)(param_1 + 0x420) != 0 && (_DAT_00555910 != *(double *)(param_1 + 0x428))))) &&
     (_DAT_00555910 != *(double *)(param_1 + 0x430))) {
    if ((param_2 == 0) || (*(int *)(param_1 + 0x490) != 0)) {
      iVar3 = FUN_00478400(param_1 + 0x70);
      if (iVar3 != 0) {
        return 0;
      }
    }
    FUN_00478480(param_1 + 0x70);
    pMem = *(LPCVOID *)(param_1 + 0x490);
    if (pMem != (LPCVOID)0x0) {
      if (*(HGDIOBJ *)((int)pMem + 0x34) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)((int)pMem + 0x34));
      }
      if (*(HDC *)((int)pMem + 0x38) != (HDC)0x0) {
        DeleteDC(*(HDC *)((int)pMem + 0x38));
      }
      FUN_0047c4b0();
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
      *(undefined4 *)(param_1 + 0x490) = 0;
    }
    puVar6 = (undefined4 *)**(int **)(param_1 + 8);
    local_274 = 0;
    if (puVar6 != (undefined4 *)0x0) {
      piVar10 = (int *)&DAT_00554d00;
      (**(code **)*puVar6)(puVar6,&DAT_00554d00,&local_274);
      if (unaff_EDI != (int *)0x0) {
        uStack_26c = *(undefined4 *)(param_1 + 0x448);
        puStack_268 = *(undefined1 **)(param_1 + 0x44c);
        puStack_e8 = (undefined4 *)(param_1 + 0x450);
        uStack_22c = 0;
        uStack_228 = 0x3ff00000;
        local_274 = *puStack_e8;
        uStack_270 = *(undefined4 *)(param_1 + 0x454);
        puStack_224 = auStack_234;
        puStack_220 = auStack_e4;
        iStack_108 = param_1 + 0x240;
        iStack_104 = param_1 + 0x498;
        uStack_fc = *(undefined4 *)(param_1 + 0x428);
        uStack_f8 = *(undefined4 *)(param_1 + 0x42c);
        uStack_f4 = *(undefined4 *)(param_1 + 0x430);
        uStack_f0 = *(undefined4 *)(param_1 + 0x434);
        puStack_ec = (undefined4 *)(param_1 + 0x448);
        iVar3 = (**(code **)(*unaff_EDI + 0x34))(unaff_EDI,&uStack_22c);
        if (-1 < iVar3) {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = 1;
          }
          bVar1 = ftol();
          iVar7 = (uint)bVar1 << 8;
          uVar2 = ftol();
          uVar8 = CONCAT31((int3)((uint)iVar7 >> 8),uVar2) << 8;
          uVar5 = ftol();
          *(uint *)(param_1 + 0x494) = uVar8 | uVar5 & 0xff;
          *(double *)(param_1 + 0x438) =
               ((double)*(int *)(param_1 + 0x414) + (double)*(int *)(param_1 + 0x414)) /
               (double)CONCAT44(uStack_100,iStack_104);
          *(double *)(param_1 + 0x440) =
               ((double)*(int *)(param_1 + 0x418) + (double)*(int *)(param_1 + 0x418)) /
               (double)CONCAT44(uStack_f8,uStack_fc);
          if (param_2 == 0) {
LAB_0047f171:
            if (piVar10 != (int *)0x0) {
              (**(code **)(*piVar10 + 8))(piVar10);
            }
            return 0;
          }
          pvVar4 = GlobalAlloc(0x40,0x54);
          puVar6 = GlobalLock(pvVar4);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar9 = puVar6;
            for (iVar7 = 0xb; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar9 = 0;
            }
            puVar6[0xf] = 0;
            puVar6[0x10] = 0;
            puVar6[0x11] = 0;
            puVar6[0x12] = 0;
            puVar6[0xc] = 0;
            *puVar6 = 0;
            puVar6[0xd] = 0;
            puVar6[0xe] = 0;
            puVar6[0x14] = 0;
            puVar6[0x13] = 0;
          }
          *(undefined4 **)(param_1 + 0x490) = puVar6;
          if (puVar6 != (undefined4 *)0x0) {
            puStack_268 = auStack_234;
            iStack_24c = param_1 + 0x498;
            uStack_264 = 0;
            uStack_248 = 0x7fffffff;
            uStack_260 = 0;
            puStack_244 = puVar6;
            iVar3 = (**(code **)(*piVar10 + 0x38))(piVar10,&puStack_268);
            if (-1 < iVar3) goto LAB_0047f171;
          }
        }
        FUN_00478180();
        *(undefined4 *)(param_1 + 0x448) = local_274;
        *(undefined4 *)(param_1 + 0x44c) = uStack_270;
        puVar6 = *(undefined4 **)(param_1 + 0x490);
        *(undefined4 *)(param_1 + 0x450) = unaff_ESI;
        *(undefined4 *)(param_1 + 0x454) = unaff_EBX;
        if (puVar6 != (undefined4 *)0x0) {
          if ((HGDIOBJ)puVar6[0xd] != (HGDIOBJ)0x0) {
            DeleteObject((HGDIOBJ)puVar6[0xd]);
          }
          if ((HDC)puVar6[0xe] != (HDC)0x0) {
            DeleteDC((HDC)puVar6[0xe]);
          }
          puVar9 = puVar6;
          for (iVar7 = 0xb; puVar9 = puVar9 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = 0;
          }
          puVar6[0xf] = 0;
          puVar6[0x10] = 0;
          puVar6[0x11] = 0;
          puVar6[0x12] = 0;
          puVar6[0xc] = 0;
          *puVar6 = 0;
          puVar6[0xd] = 0;
          puVar6[0xe] = 0;
          puVar6[0x14] = 0;
          puVar6[0x13] = 0;
          pvVar4 = GlobalHandle(puVar6);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(puVar6);
          GlobalFree(pvVar4);
          *(undefined4 *)(param_1 + 0x490) = 0;
        }
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 8))(piVar10);
        }
        return iVar3;
      }
    }
  }
  return -0x7fffbffb;
}


