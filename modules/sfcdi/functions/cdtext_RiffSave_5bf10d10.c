/* Module: sfcdi.dll
   Function: cdtext_RiffSave
   Address: 5bf10d10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* long __stdcall cdtext_RiffSave(void *,struct _sfcdtext *,int,unsigned long *) */

long cdtext_RiffSave(void *param_1,_sfcdtext *param_2,int param_3,ulong *param_4)

{
  undefined4 uVar1;
  _sfcdtext *p_Var2;
  int iVar3;
  BOOL BVar4;
  long lVar5;
  _sfcdtext *p_Var6;
  undefined4 *puVar7;
  _sfcdtext *local_3c;
  DWORD local_38;
  ulong local_34;
  DWORD local_30 [3];
  undefined4 local_24;
  undefined4 local_20 [6];
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x10d10  228  ?cdtext_RiffSave@@YGJPAXPAU_sfcdtext@@HPAK@Z */
  p_Var2 = param_2;
  local_3c = (_sfcdtext *)0x4;
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  iVar3 = cdtext_IsCDTextValid(param_2);
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)(p_Var2 + 0x18);
    p_Var6 = p_Var2;
    puVar7 = local_20;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *(undefined4 *)p_Var6;
      p_Var6 = p_Var6 + 4;
      puVar7 = puVar7 + 1;
    }
    local_4 = *(undefined4 *)(p_Var2 + 0x718);
    local_8 = uVar1;
    if (param_3 == 0) {
      iVar3 = FUN_5bf34150(param_1,0x58544443,0);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      iVar3 = FUN_5bf34110(param_1,0x58544443,0);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    FUN_5bf33d00(param_1,&local_38);
    local_38 = local_38 - 8;
    iVar3 = FUN_5bf34040(param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
    BVar4 = WriteFile(param_1,local_20,0x20,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      return -0x7ffb1ff7;
    }
    local_3c = param_2 + (int)(local_3c + 8);
    lstrlenA((LPCSTR)(p_Var2 + 0x678));
    local_24 = *(undefined4 *)(p_Var2 + 0x674);
    local_30[2] = *(DWORD *)(p_Var2 + 0x670);
    local_30[1] = 0xc;
    iVar3 = FUN_5bf34040(param_1);
    if (iVar3 < 0) {
      return iVar3;
    }
    BVar4 = WriteFile(param_1,local_30 + 1,0xc,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      return -0x7ffb1ff7;
    }
    local_3c = local_3c + (int)param_2;
    iVar3 = FUN_5bf35600(param_1,(uchar *)(p_Var2 + 0x678),(uint *)&param_2);
    if (iVar3 < 0) {
      return iVar3;
    }
    local_3c = local_3c + 8 + (int)param_2;
    lVar5 = cdtext_RiffSaveDesList(param_1,p_Var2,&local_34);
    if (lVar5 < 0) {
      return lVar5;
    }
    local_3c = local_3c + local_34;
    FUN_5bf33d00(param_1,local_30);
    FUN_5bf33d20(param_1,local_38);
    BVar4 = WriteFile(param_1,&local_3c,4,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      return -0x7ffb1ff7;
    }
    FUN_5bf33d20(param_1,local_30[0]);
    if (param_4 != (ulong *)0x0) {
      *param_4 = (ulong)(local_3c + 8);
    }
  }
  return 0;
}


