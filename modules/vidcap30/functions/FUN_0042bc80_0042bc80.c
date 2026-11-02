/* Module: vidcap30.exe
   Function: FUN_0042bc80
   Address: 0042bc80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042bc80(int *param_1,UINT_PTR param_2,undefined4 param_3,HMENU param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piStack_174;
  int *piStack_170;
  HMENU pHStack_16c;
  HBITMAP *ppHStack_168;
  int *piVar7;
  HBITMAP local_144;
  int local_140;
  CHAR *pCStack_13c;
  HBITMAP local_138;
  CHAR aCStack_134 [24];
  undefined1 auStack_11c [24];
  CHAR local_104;
  undefined4 local_103;
  uint uStack_28;
  uint uStack_24;
  HMENU pHStack_20;
  undefined1 auStack_10 [8];
  undefined4 uStack_8;
  
  if (*param_1 != 8) {
    return;
  }
  iVar2 = FUN_00434f90();
  iVar3 = FUN_00434fc0();
  iVar5 = 0;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  if (param_5 == 0) {
    if (param_1[0x101] == 0) {
      return;
    }
    uVar1 = param_1[0x52];
    local_104 = '\0';
    param_1[0x1fb] = 0;
    puVar6 = &local_103;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0;
    *(undefined1 *)((int)puVar6 + 2) = 0;
    param_1[0x1fc] = 0;
    param_1[0x1fa] = 0;
    local_144 = (HBITMAP)0x0;
    SfPrintF();
    piStack_170 = (int *)param_1[0x101];
    ppHStack_168 = &local_144;
    pHStack_16c = param_4;
    piStack_174 = (int *)0x42c11f;
    FUN_0042bbb0();
    SfPrintF();
    ppHStack_168 = &local_144;
    piStack_170 = (int *)param_1[0x144];
    pHStack_16c = param_4;
    piStack_174 = (int *)0x42c15f;
    FUN_0042bbb0();
    ppHStack_168 = (HBITMAP *)0x42c16d;
    AppendMenuA(param_4,0x800,0,(LPCSTR)0x0);
    SfPrintF();
    ppHStack_168 = (HBITMAP *)0x42c19b;
    AppendMenuA(param_4,(uint)(uVar4 != 0 || (uVar1 & 0x40000000) == 0),param_2,&local_104);
    param_1[0x1fa] = param_2;
    return;
  }
  if (param_1[0xd8] == 0) {
    return;
  }
  uVar4 = uVar4 | (param_1[0x52] & 0x8000000U) == 0;
  local_104 = '\0';
  param_1[0x1f1] = 0;
  puVar6 = &local_103;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  param_1[0x1f2] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f9] = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  local_138 = (HBITMAP)0x0;
  SfPrintF();
  ppHStack_168 = &local_138;
  piStack_170 = (int *)param_1[0xd8];
  pHStack_16c = param_4;
  piStack_174 = (int *)0x42bd94;
  FUN_0042bbb0();
  SfPrintF();
  ppHStack_168 = &local_138;
  piStack_170 = (int *)param_1[0xec];
  pHStack_16c = param_4;
  piStack_174 = (int *)0x42bdd5;
  FUN_0042bbb0();
  pHStack_16c = (HMENU)param_1[0xed];
  piVar7 = &local_140;
  local_140 = 0;
  ppHStack_168 = (HBITMAP *)&DAT_005a2438;
  piStack_170 = (int *)0x42be00;
  iVar2 = (**(code **)(pHStack_16c->unused + 0x18))();
  if (iVar2 < 0) {
    piStack_170 = (int *)&stack0xfffffea8;
    piStack_174 = (int *)&DAT_005a1968;
    iVar2 = (**(code **)(*(int *)param_1[0xed] + 0x18))
                      ((int *)param_1[0xed],&DAT_005a2438,&DAT_005a35f8,param_1[0xd8]);
    if (iVar2 < 0) goto LAB_0042be80;
  }
  piStack_174 = (int *)0x58aacc;
  piStack_170 = param_1 + 10;
  SfPrintF(auStack_11c);
  piStack_174 = param_1 + 0x1f6;
  piStack_170 = (int *)uVar4;
  FUN_0042bbb0(piVar7,uStack_8,&stack0xfffffeb0,auStack_10,auStack_11c);
  piStack_170 = piVar7;
  if (piStack_170 != (int *)0x0) {
    piStack_174 = (int *)0x42be7c;
    (**(code **)(*piStack_170 + 8))();
  }
LAB_0042be80:
  piStack_170 = (int *)&stack0xfffffeac;
  piStack_174 = (int *)&DAT_005a1948;
  iVar2 = (**(code **)(*(int *)param_1[0xed] + 0x18))
                    ((int *)param_1[0xed],&DAT_005a2438,&DAT_005a35a8,param_1[0xd8]);
  if ((-1 < iVar2) ||
     (iVar2 = (**(code **)(*(int *)param_1[0xed] + 0x18))
                        ((int *)param_1[0xed],&DAT_005a2438,&DAT_005a35f8,param_1[0xd8],
                         &DAT_005a1948,&pHStack_16c), -1 < iVar2)) {
    SfPrintF(aCStack_134,"%s TV Audio Properties...",param_1 + 10);
    FUN_0042bbb0(pHStack_16c,pHStack_20,&ppHStack_168,&uStack_28,aCStack_134,param_1 + 0x1f9,uVar4);
    if (pHStack_16c != (HMENU)0x0) {
      (**(code **)(pHStack_16c->unused + 8))(pHStack_16c);
    }
    pHStack_16c = (HMENU)0x0;
  }
  if ((param_1[0x210] == 0) || (param_1[0x211] == 0)) {
    return;
  }
  param_1[0x1f7] = uStack_28;
  AppendMenuA(pHStack_20,0x800,0,(LPCSTR)0x0);
  piStack_174 = (int *)0x0;
  iVar2 = FUN_0042e110(&piStack_174);
  if ((-1 < iVar2) && (0 < param_1[0x211])) {
    do {
      if (uStack_24 < uStack_28) break;
      FUN_0042de10(iVar5,&stack0xfffffe9c);
      FUN_0042dfe0(iVar5,aCStack_134,0x104);
      puVar6 = (undefined4 *)&stack0xfffffea4;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      pCStack_13c = aCStack_134;
      local_138 = (HBITMAP)lstrlenA(aCStack_134);
      InsertMenuItemA(pHStack_20,uStack_28,0,(LPCMENUITEMINFOA)&stack0xfffffea0);
      iVar5 = iVar5 + 1;
      uStack_28 = uStack_28 + 1;
    } while (iVar5 < param_1[0x211]);
  }
  param_1[0x1f8] = uStack_28 - 1;
  return;
}


