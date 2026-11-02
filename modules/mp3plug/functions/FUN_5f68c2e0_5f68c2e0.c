/* Module: mp3plug.dll
   Function: FUN_5f68c2e0
   Address: 5f68c2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_5f68c2e0(void *this,undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  uint *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)((int)this + 0x1718);
  if (iVar1 < 10) {
    iVar2 = (param_4 - *(int *)((int)this + 0x16fc)) -
            (uint)(param_3 < *(uint *)((int)this + 0x16f8));
    if ((*(int *)((int)this + 0x1714) <= iVar2) &&
       ((*(int *)((int)this + 0x1714) < iVar2 ||
        (*(uint *)((int)this + 0x1710) <= param_3 - *(uint *)((int)this + 0x16f8))))) {
      if (iVar1 == 0) {
        hMem = GlobalAlloc(0x42,0xa0);
        pvVar3 = GlobalLock(hMem);
        *(LPVOID *)((int)this + 0x1720) = pvVar3;
        if (pvVar3 != (LPVOID)0x0) {
          *(undefined4 *)((int)this + 0x171c) = 10;
          *(undefined4 *)((int)this + 0x1718) = 1;
          *(uint *)((int)pvVar3 + 8) = param_3;
          *(int *)((int)pvVar3 + 0xc) = param_4;
          puVar5 = *(undefined4 **)((int)this + 0x1720);
          *puVar5 = param_1;
          puVar5[1] = param_2;
          return;
        }
      }
      else {
        iVar2 = 0;
        if (0 < iVar1) {
          puVar4 = (uint *)(*(int *)((int)this + 0x1720) + 8);
          do {
            if ((param_4 < (int)puVar4[1]) || ((param_4 <= (int)puVar4[1] && (param_3 < *puVar4))))
            break;
            iVar2 = iVar2 + 1;
            puVar4 = puVar4 + 4;
          } while (iVar2 < iVar1);
        }
        if (iVar2 < iVar1) {
          if (iVar2 == 0) {
            pvVar6 = *(void **)((int)this + 0x1720);
            iVar2 = (*(int *)((int)pvVar6 + 0xc) - param_4) -
                    (uint)(*(uint *)((int)pvVar6 + 8) < param_3);
            if (iVar2 < *(int *)((int)this + 0x1714)) {
              return;
            }
            if ((iVar2 <= *(int *)((int)this + 0x1714)) &&
               (*(uint *)((int)pvVar6 + 8) - param_3 < *(uint *)((int)this + 0x1710))) {
              return;
            }
            memmove((void *)((int)pvVar6 + 0x10),pvVar6,iVar1 << 4);
            iVar1 = *(int *)((int)this + 0x1720);
            *(uint *)(iVar1 + 8) = param_3;
            *(int *)(iVar1 + 0xc) = param_4;
            puVar5 = *(undefined4 **)((int)this + 0x1720);
            *puVar5 = param_1;
            puVar5[1] = param_2;
          }
          else {
            iVar8 = iVar2 * 0x10;
            pvVar6 = (void *)(*(int *)((int)this + 0x1720) + iVar8);
            iVar7 = (*(int *)((int)pvVar6 + 0xc) - param_4) -
                    (uint)(*(uint *)((int)pvVar6 + 8) < param_3);
            if (iVar7 < *(int *)((int)this + 0x1714)) {
              return;
            }
            if ((iVar7 <= *(int *)((int)this + 0x1714)) &&
               (*(uint *)((int)pvVar6 + 8) - param_3 < *(uint *)((int)this + 0x1710))) {
              return;
            }
            iVar7 = (param_4 - *(int *)((int)pvVar6 + -4)) -
                    (uint)(param_3 < *(uint *)((int)pvVar6 + -8));
            if (iVar7 < *(int *)((int)this + 0x1714)) {
              return;
            }
            if ((iVar7 <= *(int *)((int)this + 0x1714)) &&
               (param_3 - *(uint *)((int)pvVar6 + -8) < *(uint *)((int)this + 0x1710))) {
              return;
            }
            memmove((void *)((iVar2 + 1) * 0x10 + *(int *)((int)this + 0x1720)),pvVar6,
                    (iVar2 * 0xfffffff + iVar1) * 0x10);
            iVar1 = *(int *)((int)this + 0x1720);
            *(uint *)(iVar8 + 8 + iVar1) = param_3;
            *(int *)(iVar8 + 0xc + iVar1) = param_4;
            puVar5 = (undefined4 *)(iVar8 + *(int *)((int)this + 0x1720));
            *puVar5 = param_1;
            puVar5[1] = param_2;
          }
        }
        else {
          iVar7 = *(int *)((int)this + 0x1720);
          puVar4 = (uint *)(iVar2 * 0x10 + -8 + iVar7);
          iVar2 = (param_4 - *(int *)(iVar2 * 0x10 + -4 + iVar7)) - (uint)(param_3 < *puVar4);
          if (iVar2 < *(int *)((int)this + 0x1714)) {
            return;
          }
          if ((iVar2 <= *(int *)((int)this + 0x1714)) &&
             (param_3 - *puVar4 < *(uint *)((int)this + 0x1710))) {
            return;
          }
          *(uint *)(iVar1 * 0x10 + 8 + iVar7) = param_3;
          *(int *)(iVar1 * 0x10 + 0xc + iVar7) = param_4;
          puVar5 = (undefined4 *)
                   (*(int *)((int)this + 0x1718) * 0x10 + *(int *)((int)this + 0x1720));
          *puVar5 = param_1;
          puVar5[1] = param_2;
        }
        *(int *)((int)this + 0x1718) = *(int *)((int)this + 0x1718) + 1;
      }
    }
  }
  return;
}


