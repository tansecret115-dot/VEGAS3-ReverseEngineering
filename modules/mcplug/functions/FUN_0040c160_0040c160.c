/* Module: mcplug.dll
   Function: FUN_0040c160
   Address: 0040c160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c160(int param_1,undefined4 *param_2)

{
  int *piVar1;
  LPSTR pCVar2;
  LPWSTR pWVar3;
  size_t sVar4;
  undefined4 *pv;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  code *pcVar8;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  pCVar2 = FUN_00419470(DAT_00487ed8,*(uint *)(param_1 + 0x1c));
  pWVar3 = FUN_00419350((int)DAT_00487ed8,pCVar2);
  sVar4 = wcslen(pWVar3);
  uVar6 = sVar4 * 2 + 2;
  pv = CoTaskMemAlloc(uVar6);
  if (pv != (undefined4 *)0x0) {
    puVar7 = pv;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *(undefined4 *)pWVar3;
      pWVar3 = pWVar3 + 2;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)puVar7 = (char)*pWVar3;
      pWVar3 = (LPWSTR)((int)pWVar3 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    pWVar3 = CoTaskMemAlloc(0x410);
    if (pWVar3 != (LPWSTR)0x0) {
      FUN_00409630((BYTE *)(pWVar3 + 0x104),0x104);
      MultiByteToWideChar(0,0,(LPCSTR)(pWVar3 + 0x104),-1,pWVar3,0x104);
      piVar1 = param_2 + 2;
      *param_2 = 0x1c;
      param_2[1] = pv;
      param_2[4] = 0;
      param_2[5] = pWVar3;
      param_2[6] = 0;
      *piVar1 = 300;
      param_2[3] = 0x96;
      uVar6 = *(uint *)(param_1 + 0x18);
      switch(uVar6) {
      case 0x3ed:
      case 0x3f4:
      case 0x3f9:
        FUN_00418530(DAT_00487ed8,uVar6,FUN_0040c8c0,0,piVar1);
        return 0;
      case 0x3ee:
      case 0x3f3:
      case 0x3f8:
        FUN_00418530(DAT_00487ed8,uVar6,FUN_0040c920,0,piVar1);
        return 0;
      case 0x3ef:
      case 0x3f2:
      case 0x3f7:
        pcVar8 = FUN_0040c980;
        break;
      case 0x3f0:
      case 0x3f1:
      case 0x3f6:
        FUN_00418530(DAT_00487ed8,uVar6,FUN_0040c9e0,0,piVar1);
        return 0;
      default:
        pcVar8 = FUN_0040c860;
      }
      FUN_00418530(DAT_00487ed8,uVar6,pcVar8,0,piVar1);
      return 0;
    }
    CoTaskMemFree(pv);
    return 0x8007000e;
  }
  return 0x8007000e;
}


