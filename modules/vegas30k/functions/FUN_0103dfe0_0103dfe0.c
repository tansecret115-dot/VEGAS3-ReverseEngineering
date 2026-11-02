/* Module: vegas30k.dll
   Function: FUN_0103dfe0
   Address: 0103dfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0103e0db) */
/* WARNING: Removing unreachable block (ram,0x0103e252) */
/* WARNING: Removing unreachable block (ram,0x0103e25d) */
/* WARNING: Removing unreachable block (ram,0x0103e283) */
/* WARNING: Removing unreachable block (ram,0x0103e0f4) */
/* WARNING: Removing unreachable block (ram,0x0103e116) */
/* WARNING: Removing unreachable block (ram,0x0103e292) */
/* WARNING: Removing unreachable block (ram,0x0103e2a7) */
/* WARNING: Removing unreachable block (ram,0x0103e2cd) */
/* WARNING: Removing unreachable block (ram,0x0103e130) */
/* WARNING: Removing unreachable block (ram,0x0103e19c) */
/* WARNING: Removing unreachable block (ram,0x0103e1ea) */

int FUN_0103dfe0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  int *unaff_retaddr;
  undefined4 uVar5;
  LPCSTR lpMultiByteStr;
  int iStack_214;
  int iStack_210;
  WCHAR aWStack_20c [259];
  undefined2 uStack_6;
  
  (**(code **)(*param_1 + 0x94))(param_1);
  iStack_210 = 0;
  iStack_214 = 0;
  piVar4 = param_1;
  if (0 < param_1[1]) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1[2] + 8) + iStack_214 * 4);
      lpMultiByteStr = (LPCSTR)(puVar1 + 4);
      MultiByteToWideChar(0,1,lpMultiByteStr,-1,aWStack_20c,0x104);
      uStack_6 = 0;
      iVar2 = (**(code **)(*piVar4 + 0x88))
                        (piVar4,*puVar1,puVar1[1],puVar1[2],puVar1[3],aWStack_20c,&stack0xfffffde4);
      if (iVar2 < 0) {
        if (iVar2 == -0x7ffbfeac) {
          uVar5 = 0x10c7;
        }
        else {
          uVar5 = 0x10c8;
        }
        uVar5 = _SfGetString2_8(DAT_0120e5c8,uVar5);
        SfMsgBox(0,0x30,uVar5,lpMultiByteStr);
      }
      if ((puVar1[0x46] != 0) && (param_2 != 0)) {
        pvVar3 = GlobalHandle((LPCVOID)puVar1[0x46]);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle((LPCVOID)puVar1[0x46]);
        GlobalFree(pvVar3);
      }
      if ((puVar1[0x48] != 0) && (param_2 != 0)) {
        pvVar3 = GlobalHandle((LPCVOID)puVar1[0x48]);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle((LPCVOID)puVar1[0x48]);
        GlobalFree(pvVar3);
      }
      if (iVar2 != 0) {
        iStack_210 = iVar2;
      }
      iStack_214 = iStack_214 + 1;
      piVar4 = unaff_retaddr;
    } while (iStack_214 < param_1[1]);
  }
  if (param_2 != 0) {
    for (iVar2 = param_1[1]; -1 < iVar2; iVar2 = iVar2 + -1) {
      _SfList_DeleteList_16(param_1[2],iVar2,1,1);
    }
    _SfList_Destroy_4(param_1[2]);
  }
  return iStack_210;
}


