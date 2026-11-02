/* Module: sfpublish.dll
   Function: FUN_004227a0
   Address: 004227a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_004227a0(void *this,uchar *param_1,uchar *param_2,uchar *param_3,undefined4 *param_4,
            uint param_5,uchar *param_6,char *param_7,uchar *param_8)

{
  char cVar1;
  LPCVOID pMem;
  undefined4 uVar2;
  HGLOBAL pvVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  code *pcVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  iVar8 = -0x7fffbffb;
  if (*(int *)((int)this + 0x68) != 0) {
    if (*(int *)((int)this + 0x38) == 0) {
      if ((((param_1 == (uchar *)0x0) || (param_2 == (uchar *)0x0)) ||
          (param_4 == (undefined4 *)0x0)) ||
         (((param_5 == 0 || (param_6 == (uchar *)0x0)) || (param_7 == (char *)0x0)))) {
        iVar8 = -0x7ff8ffa9;
      }
      else {
        iVar8 = FUN_00421ce0(this,param_1,param_2,param_3,param_8);
        if (-1 < iVar8) {
          iVar8 = FUN_00420370(param_6,(undefined4 *)((int)this + 0x8c));
          if (-1 < iVar8) {
            uVar6 = 0xffffffff;
            pcVar4 = param_7;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            pvVar3 = GlobalAlloc(0x40,~uVar6);
            pcVar4 = GlobalLock(pvVar3);
            *(char **)((int)this + 0x90) = pcVar4;
            pcVar10 = GlobalHandle_exref;
            if (pcVar4 != (char *)0x0) {
              uVar6 = 0xffffffff;
              do {
                pcVar9 = param_7;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar9 = param_7 + 1;
                cVar1 = *param_7;
                param_7 = pcVar9;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              pcVar9 = pcVar9 + -uVar6;
              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar4 = pcVar4 + 4;
              }
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar4 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar4 = pcVar4 + 1;
              }
              pvVar3 = GlobalAlloc(0x40,param_5);
              puVar5 = GlobalLock(pvVar3);
              *(undefined4 **)((int)this + 0x84) = puVar5;
              pcVar10 = GlobalHandle_exref;
              if (puVar5 != (undefined4 *)0x0) {
                for (uVar6 = param_5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *puVar5 = *param_4;
                  param_4 = param_4 + 1;
                  puVar5 = puVar5 + 1;
                }
                for (uVar6 = param_5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(undefined1 *)puVar5 = *(undefined1 *)param_4;
                  param_4 = (undefined4 *)((int)param_4 + 1);
                  puVar5 = (undefined4 *)((int)puVar5 + 1);
                }
                *(uint *)((int)this + 0x88) = param_5;
                FUN_004204f0(this,0x12e);
                iVar8 = 0x4e011;
                goto LAB_00422958;
              }
              pMem = *(LPCVOID *)((int)this + 0x90);
              pvVar3 = GlobalHandle(pMem);
              GlobalUnlock(pvVar3);
              pvVar3 = GlobalHandle(pMem);
              GlobalFree(pvVar3);
              *(undefined4 *)((int)this + 0x90) = 0;
            }
            iVar8 = -0x7ff8fff2;
            uVar2 = *(undefined4 *)((int)this + 0x8c);
            pvVar3 = (HGLOBAL)(*pcVar10)(uVar2);
            GlobalUnlock(pvVar3);
            pvVar3 = (HGLOBAL)(*pcVar10)(uVar2);
            GlobalFree(pvVar3);
            *(undefined4 *)((int)this + 0x8c) = 0;
          }
          FUN_00421dd0((int)this);
        }
      }
    }
    else {
      iVar8 = -0x7ffb1f54;
    }
  }
LAB_00422958:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return iVar8;
}


