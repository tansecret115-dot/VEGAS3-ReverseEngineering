/* Module: vegas30k.dll
   Function: FUN_011bd700
   Address: 011bd700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011bd700(int param_1,int *param_2,int param_3,uint *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pMem;
  int iVar4;
  uint uVar5;
  int iVar6;
  int unaff_EBP;
  int iVar7;
  uint unaff_EDI;
  undefined4 *puVar8;
  longlong lVar9;
  int *piStack00000010;
  undefined4 uStack00000014;
  int iVar10;
  uint local_18;
  int iStack_14;
  int iStack_c;
  int local_8;
  undefined4 local_4;
  
  piStack00000010 = *(int **)(param_1 + 0x4b0);
  uStack00000014 = 0;
  ftol();
  puVar8 = *(undefined4 **)(param_1 + 0x674);
  local_8 = 0;
  local_4 = 0;
  if (puVar8 == (undefined4 *)0x0) {
    return 0x8000ffff;
  }
  do {
    (*(code *)**(undefined4 **)*puVar8)((undefined4 *)*puVar8,&DAT_011d9c90,&stack0x00000010);
    if (piStack00000010 != (int *)0x0) {
      (**(code **)(*piStack00000010 + 0x8c))(piStack00000010,0x31,&iStack_c);
      iVar6 = local_8;
      if ((param_1 == 0) && ((*(byte *)(puVar8 + 3) & 0x40) != 0)) {
        if (local_8 == -1) {
          (**(code **)(*param_2 + 8))(param_2);
LAB_011bd816:
          iVar7 = 0;
          if (param_2 == (int *)0x0) {
            return 0x8000ffff;
          }
          iVar10 = 0;
          pvVar3 = GlobalAlloc(0x42,*(ushort *)(unaff_EBP + 0x4ca) * unaff_EDI);
          pMem = GlobalLock(pvVar3);
          local_18 = 0;
          if (pMem != (LPVOID)0x0) {
            while( true ) {
              uVar5 = unaff_EDI - local_18;
              iVar4 = -(uint)(unaff_EDI < local_18) - iStack_14;
              iVar2 = param_2[0x21f];
              if ((iVar2 <= iVar4) && ((iVar2 < iVar4 || ((uint)param_2[0x21e] < uVar5)))) {
                iVar4 = iVar2;
                uVar5 = param_2[0x21e];
              }
              lVar9 = FUN_01184a00((int)pMem + iVar7,uVar5,iVar4,iVar6);
              if (lVar9 < 0) break;
              _SfAudio_Copy_24(unaff_EBP + 0x4ac,iVar10 + param_3,unaff_EBP + 0x4be,
                               (int)pMem + iVar7,(int)lVar9,(float)*(double *)(param_2 + 0x24));
              lVar9 = lVar9 + CONCAT44(iStack_14,local_18);
              local_18 = (uint)lVar9;
              iStack_14 = (int)((ulonglong)lVar9 >> 0x20);
              iVar10 = *(ushort *)(unaff_EBP + 0x4b8) * local_18;
              iVar7 = *(ushort *)(unaff_EBP + 0x4ca) * local_18;
              if ((0xffffffff < lVar9) ||
                 ((iVar6 = iStack_c, -1 < lVar9 && (unaff_EDI <= local_18)))) {
                pvVar3 = GlobalHandle(pMem);
                GlobalUnlock(pvVar3);
                pvVar3 = GlobalHandle(pMem);
                GlobalFree(pvVar3);
                *param_4 = local_18;
                return 0;
              }
            }
            return 0x8004e0a2;
          }
          return 0x8007000e;
        }
        unaff_EBP = 0;
        for (puVar1 = (undefined4 *)param_2[0x182]; puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)puVar1[0x5b]) {
          (**(code **)(*(int *)*puVar1 + 0x8c))((int *)*puVar1,0x33,&stack0xffffffd8);
          if (iVar6 == 0) goto LAB_011bd810;
        }
        if (iVar6 == 0) {
LAB_011bd810:
          (**(code **)(*param_2 + 8))(param_2);
          goto LAB_011bd816;
        }
      }
      (**(code **)(*param_2 + 8))(param_2);
    }
    puVar8 = (undefined4 *)puVar8[6];
    if (puVar8 == (undefined4 *)0x0) {
      return 0x8000ffff;
    }
  } while( true );
}


