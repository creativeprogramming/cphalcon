
extern zend_class_entry *phalcon_mvc_model_managerinterface_ce;

ZEPHIR_INIT_CLASS(Phalcon_Mvc_Model_ManagerInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_initialize, 0, 0, 0)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_isinitialized, 0, 0, 0)
	ZEND_ARG_INFO(0, modelName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_load, 0, 0, 0)
	ZEND_ARG_INFO(0, modelName)
	ZEND_ARG_INFO(0, newInstance)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_addhasone, 0, 0, 0)
	ZEND_ARG_INFO(0, model)
	ZEND_ARG_INFO(0, fields)
	ZEND_ARG_INFO(0, referencedModel)
	ZEND_ARG_INFO(0, referencedFields)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_addbelongsto, 0, 0, 0)
	ZEND_ARG_INFO(0, model)
	ZEND_ARG_INFO(0, fields)
	ZEND_ARG_INFO(0, referencedModel)
	ZEND_ARG_INFO(0, referencedFields)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_addhasmany, 0, 0, 0)
	ZEND_ARG_INFO(0, model)
	ZEND_ARG_INFO(0, fields)
	ZEND_ARG_INFO(0, referencedModel)
	ZEND_ARG_INFO(0, referencedFields)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_existsbelongsto, 0, 0, 0)
	ZEND_ARG_INFO(0, modelName)
	ZEND_ARG_INFO(0, modelRelation)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_existshasmany, 0, 0, 0)
	ZEND_ARG_INFO(0, modelName)
	ZEND_ARG_INFO(0, modelRelation)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_existshasone, 0, 0, 0)
	ZEND_ARG_INFO(0, modelName)
	ZEND_ARG_INFO(0, modelRelation)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_getbelongstorecords, 0, 0, 0)
	ZEND_ARG_INFO(0, method)
	ZEND_ARG_INFO(0, modelName)
	ZEND_ARG_INFO(0, modelRelation)
	ZEND_ARG_INFO(0, record)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_gethasmanyrecords, 0, 0, 0)
	ZEND_ARG_INFO(0, method)
	ZEND_ARG_INFO(0, modelName)
	ZEND_ARG_INFO(0, modelRelation)
	ZEND_ARG_INFO(0, record)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_gethasonerecords, 0, 0, 0)
	ZEND_ARG_INFO(0, method)
	ZEND_ARG_INFO(0, modelName)
	ZEND_ARG_INFO(0, modelRelation)
	ZEND_ARG_INFO(0, record)
	ZEND_ARG_INFO(0, parameters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_getbelongsto, 0, 0, 0)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_gethasmany, 0, 0, 0)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_gethasone, 0, 0, 0)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_gethasoneandhasmany, 0, 0, 0)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_getrelations, 0, 0, 0)
	ZEND_ARG_INFO(0, modelName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_getrelationsbetween, 0, 0, 0)
	ZEND_ARG_INFO(0, first)
	ZEND_ARG_INFO(0, second)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_createquery, 0, 0, 0)
	ZEND_ARG_INFO(0, phql)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_executequery, 0, 0, 0)
	ZEND_ARG_INFO(0, phql)
	ZEND_ARG_INFO(0, placeholders)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_createbuilder, 0, 0, 0)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_addbehavior, 0, 0, 0)
	ZEND_ARG_INFO(0, model)
	ZEND_ARG_INFO(0, behavior)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_notifyevent, 0, 0, 0)
	ZEND_ARG_INFO(0, eventName)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_mvc_model_managerinterface_missingmethod, 0, 0, 0)
	ZEND_ARG_INFO(0, model)
	ZEND_ARG_INFO(0, eventName)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_mvc_model_managerinterface_method_entry) {
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, initialize, arginfo_phalcon_mvc_model_managerinterface_initialize)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, isInitialized, arginfo_phalcon_mvc_model_managerinterface_isinitialized)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, getLastInitialized, NULL)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, load, arginfo_phalcon_mvc_model_managerinterface_load)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, addHasOne, arginfo_phalcon_mvc_model_managerinterface_addhasone)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, addBelongsTo, arginfo_phalcon_mvc_model_managerinterface_addbelongsto)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, addHasMany, arginfo_phalcon_mvc_model_managerinterface_addhasmany)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, existsBelongsTo, arginfo_phalcon_mvc_model_managerinterface_existsbelongsto)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, existsHasMany, arginfo_phalcon_mvc_model_managerinterface_existshasmany)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, existsHasOne, arginfo_phalcon_mvc_model_managerinterface_existshasone)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, getBelongsToRecords, arginfo_phalcon_mvc_model_managerinterface_getbelongstorecords)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, getHasManyRecords, arginfo_phalcon_mvc_model_managerinterface_gethasmanyrecords)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, getHasOneRecords, arginfo_phalcon_mvc_model_managerinterface_gethasonerecords)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, getBelongsTo, arginfo_phalcon_mvc_model_managerinterface_getbelongsto)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, getHasMany, arginfo_phalcon_mvc_model_managerinterface_gethasmany)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, getHasOne, arginfo_phalcon_mvc_model_managerinterface_gethasone)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, getHasOneAndHasMany, arginfo_phalcon_mvc_model_managerinterface_gethasoneandhasmany)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, getRelations, arginfo_phalcon_mvc_model_managerinterface_getrelations)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, getRelationsBetween, arginfo_phalcon_mvc_model_managerinterface_getrelationsbetween)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, createQuery, arginfo_phalcon_mvc_model_managerinterface_createquery)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, executeQuery, arginfo_phalcon_mvc_model_managerinterface_executequery)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, createBuilder, arginfo_phalcon_mvc_model_managerinterface_createbuilder)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, addBehavior, arginfo_phalcon_mvc_model_managerinterface_addbehavior)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, notifyEvent, arginfo_phalcon_mvc_model_managerinterface_notifyevent)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, missingMethod, arginfo_phalcon_mvc_model_managerinterface_missingmethod)
	PHP_ABSTRACT_ME(Phalcon_Mvc_Model_ManagerInterface, getLastQuery, NULL)
	PHP_FE_END
};
