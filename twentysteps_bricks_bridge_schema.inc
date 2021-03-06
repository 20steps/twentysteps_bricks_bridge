<?php
	
	/*
	 * This file is part of the 20steps Bricks module.
	 *
	 * (c) 2017 20steps
	 *
	 * For the full copyright and license information, please view the LICENSE
	 * file that was distributed with this source code.
	 */

function twentysteps_bricks_bridge_alter_schema(SchemaCache $schema)
{
    $schema['users']['fields']['usernameCanonical'] = array(
        'type' => 'string',
        'not null' => TRUE,
        'default' => "",
    );

    $schema['users']['fields']['emailCanonical'] = array(
        'type' => 'string',
        'not null' => TRUE,
        'default' => "",
    );

//    $schema['users']['fields']['enabled'] = array(
//        'type' => 'string',
//        'not null' => TRUE,
//        'default' => "",
//    );
//
//    $schema['users']['fields']['algorithm'] = array(
//        'type' => 'string',
//        'not null' => TRUE,
//        'default' => "",
//    );
//
//    $schema['users']['fields']['salt'] = array(
//        'type' => 'string',
//        'not null' => TRUE,
//        'default' => "",
//    );
//
//    $schema['users']['fields']['lastLogin'] = array(
//        'type' => 'string',
//        'not null' => TRUE,
//        'default' => "",
//    );
//
//    $schema['users']['fields']['locked'] = array(
//        'type' => 'string',
//        'not null' => TRUE,
//        'default' => "",
//    );
//
//    $schema['users']['fields']['expired'] = array(
//        'type' => 'string',
//        'not null' => TRUE,
//        'default' => "",
//    );

//    $schema['users']['fields']['confirmationToken'] = array(
//        'type' => 'string',
//        'not null' => TRUE,
//        'default' => "",
//    );

//    $schema['users']['fields']['passwordRequestedAt'] = array(
//        'type' => 'string',
//        'not null' => TRUE,
//        'default' => "",
//    );

//    $schema['users']['fields']['roles'] = array(
//        'type' => 'string',
//        'not null' => TRUE,
//        'default' => "",
//    );

//    $schema['users']['fields']['credentialsExpired'] = array(
//        'type' => 'string',
//        'not null' => TRUE,
//        'default' => "",
//    );

//    $schema['users']['fields']['credentialsExpireAt'] = array(
//        'type' => 'string',
//        'not null' => TRUE,
//        'default' => "",
//    );
}
