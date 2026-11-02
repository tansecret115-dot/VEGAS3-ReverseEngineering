/* Module: sfpublish.dll
   Function: FUN_00414140
   Address: 00414140
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004142ab) */
/* WARNING: Removing unreachable block (ram,0x004142c8) */
/* WARNING: Removing unreachable block (ram,0x004142ef) */
/* WARNING: Removing unreachable block (ram,0x004142f7) */
/* WARNING: Removing unreachable block (ram,0x0041431e) */
/* WARNING: Removing unreachable block (ram,0x0041433d) */
/* WARNING: Removing unreachable block (ram,0x0041434b) */
/* WARNING: Removing unreachable block (ram,0x00414355) */
/* WARNING: Removing unreachable block (ram,0x0041435d) */
/* WARNING: Removing unreachable block (ram,0x00414361) */
/* WARNING: Removing unreachable block (ram,0x00414388) */
/* WARNING: Removing unreachable block (ram,0x00414392) */
/* WARNING: Removing unreachable block (ram,0x0041439a) */
/* WARNING: Removing unreachable block (ram,0x004143c1) */
/* WARNING: Removing unreachable block (ram,0x004143e0) */
/* WARNING: Removing unreachable block (ram,0x004143ee) */
/* WARNING: Removing unreachable block (ram,0x004143f8) */
/* WARNING: Removing unreachable block (ram,0x00414400) */
/* WARNING: Removing unreachable block (ram,0x00414418) */
/* WARNING: Removing unreachable block (ram,0x00414439) */
/* WARNING: Removing unreachable block (ram,0x00414454) */
/* WARNING: Removing unreachable block (ram,0x0041446f) */
/* WARNING: Removing unreachable block (ram,0x00414489) */
/* WARNING: Removing unreachable block (ram,0x004144d4) */
/* WARNING: Removing unreachable block (ram,0x004144b2) */
/* WARNING: Removing unreachable block (ram,0x004144bd) */
/* WARNING: Removing unreachable block (ram,0x004144bf) */
/* WARNING: Removing unreachable block (ram,0x004144c4) */
/* WARNING: Removing unreachable block (ram,0x004144c6) */
/* WARNING: Removing unreachable block (ram,0x004144d9) */
/* WARNING: Removing unreachable block (ram,0x004144e4) */
/* WARNING: Removing unreachable block (ram,0x004144f2) */

int FUN_00414140(HMODULE param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  HRESULT HVar2;
  undefined *puVar3;
  int *unaff_EBX;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  LPVOID pv;
  int *piStack_14;
  int *local_10;
  undefined4 uStack_8;
  
  if ((((param_4 == 0) && (param_5 == 0)) || (param_6 == (undefined4 *)0x0)) ||
     (param_7 == (undefined4 *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_7 = 0;
  *param_6 = 0;
  local_10 = (int *)0x0;
  iVar1 = FUN_00423690(param_1,&DAT_00435600);
  if (iVar1 < 0) {
    pcVar5 = "Could not create SfConfigMgr COM object hr=0x%x";
    uVar6 = 0x108;
    pcVar7 = "gatherstats.cpp";
    uVar4 = 1;
    puVar3 = FUN_004012b0();
    FUN_00415b60((int)puVar3,uVar4,pcVar7,uVar6,pcVar5);
    return iVar1;
  }
  pv = (LPVOID)0x1;
  iVar1 = 0;
  piVar8 = local_10;
  HVar2 = (**(code **)(*local_10 + 0xc))();
  if (HVar2 < 0) {
    pcVar7 = "ISfConfigMgr::GetXMLVersionData failed hr=0x%x";
    uVar6 = 0x100;
  }
  else {
    piStack_14 = (int *)0x0;
    HVar2 = CoCreateInstance((IID *)&DAT_00436308,(LPUNKNOWN)0x0,1,(IID *)&DAT_00436318,&piStack_14)
    ;
    if (-1 < HVar2) {
      uStack_8 = 0;
      HVar2 = (**(code **)*piStack_14)(piStack_14);
      if (-1 < HVar2) {
        HVar2 = (**(code **)(*piStack_14 + 0x10))(piStack_14,piVar8,iVar1,&stack0xffffffd0);
        if (-1 < HVar2) {
          (**(code **)(*piStack_14 + 8))(piStack_14);
          piStack_14 = (int *)0x0;
          if (iVar1 != 0) {
            HVar2 = -0x7ffb1fc7;
            goto LAB_00414517;
          }
          piVar8 = (int *)0x0;
          HVar2 = (**(code **)(iRam00000000 + 0xdc))(0,L"configinfo",&stack0xffffffc0);
          if (-1 < HVar2) {
            HVar2 = (**(code **)(*piVar8 + 0x20))(piVar8,&stack0xffffffd4);
          }
        }
        if (piStack_14 != (int *)0x0) {
          (**(code **)(*piStack_14 + 8))(piStack_14);
          piStack_14 = (int *)0x0;
        }
      }
LAB_00414517:
      (**(code **)(iRam00000000 + 8))(0);
      piStack_14 = (int *)0x0;
    }
    CoTaskMemFree(pv);
    if (-1 < HVar2) goto LAB_00414566;
    pcVar7 = "Something failed when adding XML publishstats elements hr=0x%x";
    uVar6 = 0xfb;
  }
  pcVar5 = "gatherstats.cpp";
  uVar4 = 1;
  puVar3 = FUN_004012b0();
  FUN_00415b60((int)puVar3,uVar4,pcVar5,uVar6,pcVar7);
LAB_00414566:
  (**(code **)(*unaff_EBX + 8))();
  return HVar2;
}


