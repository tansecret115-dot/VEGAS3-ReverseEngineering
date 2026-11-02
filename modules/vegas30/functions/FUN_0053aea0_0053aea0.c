/* Module: vegas30.exe
   Function: FUN_0053aea0
   Address: 0053aea0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0053aea0(int param_1,int param_2,LPSTR param_3,int param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  LPCSTR lpString2;
  bool bVar3;
  undefined4 uVar4;
  uint local_108;
  undefined1 local_104 [260];
  
  bVar3 = false;
  local_108 = 1;
  if (param_4 != 0) {
    *param_3 = '\0';
    if (*(int *)(param_1 + 0xc) == 400) {
      iVar1 = FUN_00445d30(param_1,param_2);
      if (iVar1 != 0) {
        iVar2 = FUN_00508960(local_104,iVar1,0x104);
        bVar3 = iVar2 != 0;
        if (bVar3) {
          FUN_0050ab70(local_104,param_3,param_4);
        }
        local_108 = ~*(uint *)(iVar1 + 0x78) & 1;
      }
    }
    else if (*(int *)(param_1 + 0xc) == 0x191) {
      if (param_2 == 0) {
        uVar4 = 0x698f;
      }
      else if (param_2 == 1) {
        uVar4 = 0x6990;
      }
      else {
        if (param_2 != 2) goto LAB_0053af81;
        uVar4 = 0x6991;
      }
      lpString2 = (LPCSTR)_SfGetString_8(DAT_00647204,uVar4);
      lstrcpynA(param_3,lpString2,param_4);
      param_3[param_4 + -1] = '\0';
      bVar3 = true;
    }
  }
LAB_0053af81:
  if (param_5 != (uint *)0x0) {
    *param_5 = local_108;
  }
  return bVar3;
}


