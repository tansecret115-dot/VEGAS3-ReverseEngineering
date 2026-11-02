/* Module: vegas30.exe
   Function: FUN_0047a110
   Address: 0047a110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0047a12b) */

undefined4 FUN_0047a110(int param_1,undefined4 param_2,LONG param_3,LONG param_4)

{
  int *piVar1;
  uint uVar2;
  POINT pt;
  HWND pHVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  RECT local_10;
  
  iVar5 = 0;
  piVar1 = *(int **)(param_1 + 0x18);
  iVar7 = 0;
  if (piVar1 != (int *)0x0) {
    iVar7 = *(int *)(param_1 + 0x44);
    if ((iVar7 < 0) || (*piVar1 + -1 < iVar7)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(piVar1[2] + iVar7 * 4);
    }
    if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0xc) & 4) != 0)) {
      iVar7 = 0;
    }
  }
  piVar1 = *(int **)(param_1 + 0x54);
  pHVar3 = GetCapture();
  if (pHVar3 == (HWND)*piVar1) {
    ReleaseCapture();
    if (iVar7 != 0) {
      if ((*(byte *)(piVar1 + 10) & 7) != 0) {
        iVar5 = FUN_004799c0(param_1,iVar7);
      }
      if ((*(byte *)(piVar1 + 10) & 8) == 0) {
        if (iVar5 == 0) {
          FUN_00479620(param_1,0,iVar7);
        }
        else {
          FUN_00479600(param_1,0,iVar7);
        }
      }
      else {
        FUN_0047a280(&local_10,param_3,param_4,*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x10),
                     *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x14));
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        uVar2 = **(uint **)(iVar7 + 0x30);
        if (uVar2 != 0) {
          do {
            FUN_00479160(param_1,iVar7,uVar6,&param_3,0);
            pt.y = param_4;
            pt.x = param_3;
            BVar4 = PtInRect(&local_10,pt);
            if (BVar4 != 0) {
              if (*(int *)(param_1 + 0x48) == -1) {
                *(uint *)(param_1 + 0x48) = uVar6;
              }
              else {
                *(uint *)(param_1 + 0x4c) = (uVar6 - *(int *)(param_1 + 0x48)) + 1;
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar2);
        }
        FUN_00479520(param_1);
        piVar1[10] = piVar1[10] & 0xfffffff7;
      }
      FUN_00479940(param_1,iVar7);
      if ((*(byte *)(piVar1 + 10) & 4) != 0) {
        *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        FUN_00479520(param_1);
      }
      piVar1[1] = -1;
      piVar1[10] = piVar1[10] & 0xffffffe8;
      return 1;
    }
    return 0;
  }
  return 0;
}


