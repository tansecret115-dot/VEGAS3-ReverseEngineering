/* Module: encn3260.dll
   Function: FUN_664bdee0
   Address: 664bdee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664bdee0(void *this,byte *param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  bool bVar10;
  
  if (*(int *)this != 0) {
    uVar7 = 0;
    bVar1 = *param_1;
    pbVar3 = param_1;
    if (*(int *)((int)this + 0x18) == 0) {
      while (bVar1 != 0) {
        if (((char)bVar1 < 'A') || ('Z' < (char)bVar1)) {
          uVar5 = (uint)(char)bVar1;
        }
        else {
          uVar5 = (int)(char)bVar1 | 0x20;
        }
        uVar7 = uVar5 + uVar7 * 0x21;
        pbVar3 = (byte *)FUN_664d1c60((LPCSTR)pbVar3);
        bVar1 = *pbVar3;
      }
    }
    else {
      while (bVar1 != 0) {
        uVar7 = uVar7 * 0x21 + (int)(char)bVar1;
        pbVar3 = (byte *)FUN_664d1c60((LPCSTR)pbVar3);
        bVar1 = *pbVar3;
      }
    }
    uVar7 = uVar7 % *(uint *)((int)this + 4);
    piVar9 = *(int **)(*(int *)this + uVar7 * 4);
    piVar6 = (int *)(*(int *)this + uVar7 * 4);
    if (piVar9 != (int *)0x0) {
      do {
        if (*(int *)((int)this + 0x18) == 0) {
          iVar4 = _stricmp((char *)piVar9[2],(char *)param_1);
          if (iVar4 == 0) {
            *piVar6 = *piVar9;
            FUN_664bdcd0(this,piVar9);
            return 1;
          }
        }
        else {
          pbVar3 = (byte *)piVar9[2];
          pbVar8 = param_1;
          do {
            bVar1 = *pbVar3;
            bVar10 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_664bdfa2:
              iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_664bdfa7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar10 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_664bdfa2;
            pbVar3 = pbVar3 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_664bdfa7:
          if (iVar4 == 0) {
            *piVar6 = *piVar9;
            FUN_664bdcd0(this,piVar9);
            return 1;
          }
        }
        piVar2 = (int *)*piVar9;
        piVar6 = piVar9;
        piVar9 = piVar2;
        if (piVar2 == (int *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


