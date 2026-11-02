/* Module: pngu3266.dll
   Function: DrawPolygon
   Address: 6060d32d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNDC::DrawPolygon(class CPNSimpleList *,long,long,long) */

void __thiscall
XPNDC::DrawPolygon(XPNDC *this,CPNSimpleList *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined4 *puVar2;
  CPNSimpleList *pCVar3;
  int *piVar4;
  XPNDC *local_8;
  
                    /* 0x1d32d  1007  ?DrawPolygon@XPNDC@@QAEXPAVCPNSimpleList@@JJJ@Z */
  pCVar3 = param_1;
  if ((param_1 != (CPNSimpleList *)0x0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0)) {
    local_8 = this;
    param_1 = operator_new(iVar1 << 3);
    if (param_1 == (CPNSimpleList *)0x0) {
      param_1 = (CPNSimpleList *)0x0;
    }
    local_8 = *(XPNDC **)(pCVar3 + 4);
    pCVar3 = param_1;
    while (local_8 != (XPNDC *)0x0) {
      piVar4 = (int *)FUN_6061a2c0((int *)&local_8);
      puVar2 = (undefined4 *)*piVar4;
      *(undefined4 *)pCVar3 = *puVar2;
      *(undefined4 *)(pCVar3 + 4) = puVar2[1];
      pCVar3 = pCVar3 + 8;
    }
    (**(code **)(*(int *)this + 0xc))(iVar1,param_1,param_2,param_3,param_4);
    operator_delete(param_1);
  }
  return;
}


